
class IRSensor : public Component,  public UARTDevice, public TextSensor {
 public:
  IRSensor(UARTComponent *parent) : UARTDevice(parent) {}

  char code_arr[250];
  char chunk_a[100];
  char chunk_b[100];
  char chunk_c[100];
  char chunk_d[100];
  char chunk_e[100];
  char chunk_f[100];
  char chunk_g[100];
  char chunk_h[100];
  char chunk_i[100];
  char chunk_j[100];
  char chunk_k[100];
  char chunk_l[100];
  char chunk_m[100];
  char chunk_n[100];
  char chunk_o[100];
  
  void setup() override {
    // nothing to do here
  }
  void loop() override {
    while (available() > 0) {
      size_t num_read = readBytesUntil('\r', code_arr, sizeof(code_arr)-1);
      code_arr[num_read] = '\0';
      ESP_LOGD("custom", "IR read code of length %u", num_read);
      sprintf(chunk_a, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[0], code_arr[1], code_arr[2], code_arr[3], code_arr[4], code_arr[5], code_arr[6], code_arr[7], code_arr[8], code_arr[9], code_arr[10], code_arr[11], code_arr[12], code_arr[13], code_arr[14], code_arr[15]);
      sprintf(chunk_b, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[16], code_arr[17], code_arr[18], code_arr[19], code_arr[20], code_arr[21], code_arr[22], code_arr[23], code_arr[24], code_arr[25], code_arr[26], code_arr[27], code_arr[28], code_arr[29], code_arr[30], code_arr[31]);
      sprintf(chunk_c, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[32], code_arr[33], code_arr[34], code_arr[35], code_arr[36], code_arr[37], code_arr[38], code_arr[39], code_arr[40], code_arr[41], code_arr[42], code_arr[43], code_arr[44], code_arr[45], code_arr[46], code_arr[47]);
      sprintf(chunk_d, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[48], code_arr[49], code_arr[50], code_arr[51], code_arr[52], code_arr[53], code_arr[54], code_arr[55], code_arr[56], code_arr[57], code_arr[58], code_arr[59], code_arr[60], code_arr[61], code_arr[62], code_arr[63]);
      sprintf(chunk_e, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[64], code_arr[65], code_arr[66], code_arr[67], code_arr[68], code_arr[69], code_arr[70], code_arr[71], code_arr[72], code_arr[73], code_arr[74], code_arr[75], code_arr[76], code_arr[77], code_arr[78], code_arr[79]);
      sprintf(chunk_f, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[80], code_arr[81], code_arr[82], code_arr[83], code_arr[84], code_arr[85], code_arr[86], code_arr[87], code_arr[88], code_arr[89], code_arr[90], code_arr[91], code_arr[92], code_arr[93], code_arr[94], code_arr[95]);
      sprintf(chunk_g, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[96], code_arr[97], code_arr[98], code_arr[99], code_arr[100], code_arr[101], code_arr[102], code_arr[103], code_arr[104], code_arr[105], code_arr[106], code_arr[107], code_arr[108], code_arr[109], code_arr[110], code_arr[111]);
      sprintf(chunk_h, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[112], code_arr[113], code_arr[114], code_arr[115], code_arr[116], code_arr[117], code_arr[118], code_arr[119], code_arr[120], code_arr[121], code_arr[122], code_arr[123], code_arr[124], code_arr[125], code_arr[126], code_arr[127]);
      sprintf(chunk_m, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[192], code_arr[193], code_arr[194], code_arr[195], code_arr[196], code_arr[197], code_arr[198], code_arr[199], code_arr[200], code_arr[201], code_arr[202], code_arr[203], code_arr[204], code_arr[205], code_arr[206], code_arr[207]);
      sprintf(chunk_n, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[208], code_arr[209], code_arr[210], code_arr[211], code_arr[212], code_arr[213], code_arr[214], code_arr[215], code_arr[216], code_arr[217], code_arr[218], code_arr[219], code_arr[220], code_arr[221], code_arr[222], code_arr[222]);
      sprintf(chunk_o, "0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x", code_arr[224], code_arr[225], code_arr[226], code_arr[227], code_arr[228], code_arr[229], code_arr[230], code_arr[231], code_arr[232], code_arr[233], code_arr[234], code_arr[235]);
      
            
      ESP_LOGD("custom", "A: %s", chunk_a);
      ESP_LOGD("custom", "B: %s", chunk_b);
      ESP_LOGD("custom", "C: %s", chunk_c);
      ESP_LOGD("custom", "D: %s", chunk_d);
      ESP_LOGD("custom", "E: %s", chunk_e);
      ESP_LOGD("custom", "F: %s", chunk_f);
      ESP_LOGD("custom", "G: %s", chunk_g);
      ESP_LOGD("custom", "H: %s", chunk_h);
      ESP_LOGD("custom", "I: %s", chunk_i);
      ESP_LOGD("custom", "J: %s", chunk_j);
      ESP_LOGD("custom", "K: %s", chunk_k);
      ESP_LOGD("custom", "L: %s", chunk_l);
      ESP_LOGD("custom", "M: %s", chunk_m);
      ESP_LOGD("custom", "N: %s", chunk_n);
      ESP_LOGD("custom", "O: %s", chunk_o);
    }
  }
};