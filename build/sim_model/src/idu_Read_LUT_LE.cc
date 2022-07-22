#include <sdp.h>
bool sdp::decode_sdp_Read_LUT_LE() {
auto local_var_1 = sdp_s_lut_access_type.range(0, 0);
sc_biguint<1> local_var_2 = 0;
bool local_var_3 = (local_var_1 == local_var_2);
auto local_var_5 = sdp_s_lut_table_id.range(0, 0);
sc_biguint<1> local_var_6 = 0;
bool local_var_7 = (local_var_5 == local_var_6);
bool local_var_8 = (local_var_3 & local_var_7);
auto local_var_10 = sdp_group0_d_ew_lut_bypass.range(0, 0);
sc_biguint<1> local_var_11 = 0;
bool local_var_12 = (local_var_10 == local_var_11);
bool local_var_13 = (local_var_8 & local_var_12);
auto& univ_var_295 = local_var_13;
return univ_var_295;
}
void sdp::update_sdp_Read_LUT_LE() {
auto local_var_1 = sdp_s_lut_le_function.range(0, 0);
sc_biguint<1> local_var_2 = 0;
bool local_var_3 = (local_var_1 == local_var_2);
sc_biguint<16> local_var_4 = 0;
univ_var_296 = (sc_biguint<16>(local_var_4), sc_biguint<16>(sdp_s_lut_data));
bool local_var_8 = (univ_var_296 == sdp_s_lut_le_start);
bool local_var_9 = (univ_var_296 < sdp_s_lut_le_start);
bool local_var_10 = (local_var_8 | local_var_9);
sc_biguint<32> local_var_11 = 0;
sc_biguint<1> local_var_12 = 0;
bool local_var_13 = (local_var_1 == local_var_12);
sc_biguint<1> local_var_14 = 0;
sc_biguint<16> local_var_15 = 0;
univ_var_297 = (sc_biguint<16>(local_var_15), sc_biguint<16>(sdp_s_lut_data));
sc_biguint<32> local_var_17 = (univ_var_297 - sdp_s_lut_le_start);
auto local_var_18 = local_var_17.range(31, 31);
sc_biguint<1> local_var_19 = 1;
bool local_var_20 = (local_var_18 == local_var_19);
sc_biguint<1> local_var_21 = 1;
sc_biguint<1> local_var_22 = 0;
auto local_var_23 = (local_var_20) ? local_var_21 : local_var_22;
sc_biguint<1> local_var_24 = (local_var_14 | local_var_23);
auto local_var_25 = local_var_17.range(30, 30);
sc_biguint<1> local_var_26 = 1;
bool local_var_27 = (local_var_25 == local_var_26);
sc_biguint<1> local_var_28 = 1;
sc_biguint<1> local_var_29 = 0;
auto local_var_30 = (local_var_27) ? local_var_28 : local_var_29;
sc_biguint<1> local_var_31 = (local_var_24 | local_var_30);
auto local_var_32 = local_var_17.range(29, 29);
sc_biguint<1> local_var_33 = 1;
bool local_var_34 = (local_var_32 == local_var_33);
sc_biguint<1> local_var_35 = 1;
sc_biguint<1> local_var_36 = 0;
auto local_var_37 = (local_var_34) ? local_var_35 : local_var_36;
sc_biguint<1> local_var_38 = (local_var_31 | local_var_37);
auto local_var_39 = local_var_17.range(28, 28);
sc_biguint<1> local_var_40 = 1;
bool local_var_41 = (local_var_39 == local_var_40);
sc_biguint<1> local_var_42 = 1;
sc_biguint<1> local_var_43 = 0;
auto local_var_44 = (local_var_41) ? local_var_42 : local_var_43;
sc_biguint<1> local_var_45 = (local_var_38 | local_var_44);
auto local_var_46 = local_var_17.range(27, 27);
sc_biguint<1> local_var_47 = 1;
bool local_var_48 = (local_var_46 == local_var_47);
sc_biguint<1> local_var_49 = 1;
sc_biguint<1> local_var_50 = 0;
auto local_var_51 = (local_var_48) ? local_var_49 : local_var_50;
sc_biguint<1> local_var_52 = (local_var_45 | local_var_51);
auto local_var_53 = local_var_17.range(26, 26);
sc_biguint<1> local_var_54 = 1;
bool local_var_55 = (local_var_53 == local_var_54);
sc_biguint<1> local_var_56 = 1;
sc_biguint<1> local_var_57 = 0;
auto local_var_58 = (local_var_55) ? local_var_56 : local_var_57;
sc_biguint<1> local_var_59 = (local_var_52 | local_var_58);
auto local_var_60 = local_var_17.range(25, 25);
sc_biguint<1> local_var_61 = 1;
bool local_var_62 = (local_var_60 == local_var_61);
sc_biguint<1> local_var_63 = 1;
sc_biguint<1> local_var_64 = 0;
auto local_var_65 = (local_var_62) ? local_var_63 : local_var_64;
sc_biguint<1> local_var_66 = (local_var_59 | local_var_65);
auto local_var_67 = local_var_17.range(24, 24);
sc_biguint<1> local_var_68 = 1;
bool local_var_69 = (local_var_67 == local_var_68);
sc_biguint<1> local_var_70 = 1;
sc_biguint<1> local_var_71 = 0;
auto local_var_72 = (local_var_69) ? local_var_70 : local_var_71;
sc_biguint<1> local_var_73 = (local_var_66 | local_var_72);
auto local_var_74 = local_var_17.range(23, 23);
sc_biguint<1> local_var_75 = 1;
bool local_var_76 = (local_var_74 == local_var_75);
sc_biguint<1> local_var_77 = 1;
sc_biguint<1> local_var_78 = 0;
auto local_var_79 = (local_var_76) ? local_var_77 : local_var_78;
sc_biguint<1> local_var_80 = (local_var_73 | local_var_79);
auto local_var_81 = local_var_17.range(22, 22);
sc_biguint<1> local_var_82 = 1;
bool local_var_83 = (local_var_81 == local_var_82);
sc_biguint<1> local_var_84 = 1;
sc_biguint<1> local_var_85 = 0;
auto local_var_86 = (local_var_83) ? local_var_84 : local_var_85;
sc_biguint<1> local_var_87 = (local_var_80 | local_var_86);
auto local_var_88 = local_var_17.range(21, 21);
sc_biguint<1> local_var_89 = 1;
bool local_var_90 = (local_var_88 == local_var_89);
sc_biguint<1> local_var_91 = 1;
sc_biguint<1> local_var_92 = 0;
auto local_var_93 = (local_var_90) ? local_var_91 : local_var_92;
sc_biguint<1> local_var_94 = (local_var_87 | local_var_93);
auto local_var_95 = local_var_17.range(20, 20);
sc_biguint<1> local_var_96 = 1;
bool local_var_97 = (local_var_95 == local_var_96);
sc_biguint<1> local_var_98 = 1;
sc_biguint<1> local_var_99 = 0;
auto local_var_100 = (local_var_97) ? local_var_98 : local_var_99;
sc_biguint<1> local_var_101 = (local_var_94 | local_var_100);
auto local_var_102 = local_var_17.range(19, 19);
sc_biguint<1> local_var_103 = 1;
bool local_var_104 = (local_var_102 == local_var_103);
sc_biguint<1> local_var_105 = 1;
sc_biguint<1> local_var_106 = 0;
auto local_var_107 = (local_var_104) ? local_var_105 : local_var_106;
sc_biguint<1> local_var_108 = (local_var_101 | local_var_107);
auto local_var_109 = local_var_17.range(18, 18);
sc_biguint<1> local_var_110 = 1;
bool local_var_111 = (local_var_109 == local_var_110);
sc_biguint<1> local_var_112 = 1;
sc_biguint<1> local_var_113 = 0;
auto local_var_114 = (local_var_111) ? local_var_112 : local_var_113;
sc_biguint<1> local_var_115 = (local_var_108 | local_var_114);
auto local_var_116 = local_var_17.range(17, 17);
sc_biguint<1> local_var_117 = 1;
bool local_var_118 = (local_var_116 == local_var_117);
sc_biguint<1> local_var_119 = 1;
sc_biguint<1> local_var_120 = 0;
auto local_var_121 = (local_var_118) ? local_var_119 : local_var_120;
sc_biguint<1> local_var_122 = (local_var_115 | local_var_121);
auto local_var_123 = local_var_17.range(16, 16);
sc_biguint<1> local_var_124 = 1;
bool local_var_125 = (local_var_123 == local_var_124);
sc_biguint<1> local_var_126 = 1;
sc_biguint<1> local_var_127 = 0;
auto local_var_128 = (local_var_125) ? local_var_126 : local_var_127;
sc_biguint<1> local_var_129 = (local_var_122 | local_var_128);
auto local_var_130 = local_var_17.range(15, 15);
sc_biguint<1> local_var_131 = 1;
bool local_var_132 = (local_var_130 == local_var_131);
sc_biguint<1> local_var_133 = 1;
sc_biguint<1> local_var_134 = 0;
auto local_var_135 = (local_var_132) ? local_var_133 : local_var_134;
sc_biguint<1> local_var_136 = (local_var_129 | local_var_135);
auto local_var_137 = local_var_17.range(14, 14);
sc_biguint<1> local_var_138 = 1;
bool local_var_139 = (local_var_137 == local_var_138);
sc_biguint<1> local_var_140 = 1;
sc_biguint<1> local_var_141 = 0;
auto local_var_142 = (local_var_139) ? local_var_140 : local_var_141;
sc_biguint<1> local_var_143 = (local_var_136 | local_var_142);
auto local_var_144 = local_var_17.range(13, 13);
sc_biguint<1> local_var_145 = 1;
bool local_var_146 = (local_var_144 == local_var_145);
sc_biguint<1> local_var_147 = 1;
sc_biguint<1> local_var_148 = 0;
auto local_var_149 = (local_var_146) ? local_var_147 : local_var_148;
sc_biguint<1> local_var_150 = (local_var_143 | local_var_149);
auto local_var_151 = local_var_17.range(12, 12);
sc_biguint<1> local_var_152 = 1;
bool local_var_153 = (local_var_151 == local_var_152);
sc_biguint<1> local_var_154 = 1;
sc_biguint<1> local_var_155 = 0;
auto local_var_156 = (local_var_153) ? local_var_154 : local_var_155;
sc_biguint<1> local_var_157 = (local_var_150 | local_var_156);
auto local_var_158 = local_var_17.range(11, 11);
sc_biguint<1> local_var_159 = 1;
bool local_var_160 = (local_var_158 == local_var_159);
sc_biguint<1> local_var_161 = 1;
sc_biguint<1> local_var_162 = 0;
auto local_var_163 = (local_var_160) ? local_var_161 : local_var_162;
sc_biguint<1> local_var_164 = (local_var_157 | local_var_163);
auto local_var_165 = local_var_17.range(10, 10);
sc_biguint<1> local_var_166 = 1;
bool local_var_167 = (local_var_165 == local_var_166);
sc_biguint<1> local_var_168 = 1;
sc_biguint<1> local_var_169 = 0;
auto local_var_170 = (local_var_167) ? local_var_168 : local_var_169;
sc_biguint<1> local_var_171 = (local_var_164 | local_var_170);
auto local_var_172 = local_var_17.range(9, 9);
sc_biguint<1> local_var_173 = 1;
bool local_var_174 = (local_var_172 == local_var_173);
sc_biguint<1> local_var_175 = 1;
sc_biguint<1> local_var_176 = 0;
auto local_var_177 = (local_var_174) ? local_var_175 : local_var_176;
sc_biguint<1> local_var_178 = (local_var_171 | local_var_177);
auto local_var_179 = local_var_17.range(8, 8);
sc_biguint<1> local_var_180 = 1;
bool local_var_181 = (local_var_179 == local_var_180);
sc_biguint<1> local_var_182 = 1;
sc_biguint<1> local_var_183 = 0;
auto local_var_184 = (local_var_181) ? local_var_182 : local_var_183;
sc_biguint<1> local_var_185 = (local_var_178 | local_var_184);
auto local_var_186 = local_var_17.range(7, 7);
sc_biguint<1> local_var_187 = 1;
bool local_var_188 = (local_var_186 == local_var_187);
sc_biguint<1> local_var_189 = 1;
sc_biguint<1> local_var_190 = 0;
auto local_var_191 = (local_var_188) ? local_var_189 : local_var_190;
sc_biguint<1> local_var_192 = (local_var_185 | local_var_191);
auto local_var_193 = local_var_17.range(6, 6);
sc_biguint<1> local_var_194 = 1;
bool local_var_195 = (local_var_193 == local_var_194);
sc_biguint<1> local_var_196 = 1;
sc_biguint<1> local_var_197 = 0;
auto local_var_198 = (local_var_195) ? local_var_196 : local_var_197;
sc_biguint<1> local_var_199 = (local_var_192 | local_var_198);
auto local_var_200 = local_var_17.range(5, 5);
sc_biguint<1> local_var_201 = 1;
bool local_var_202 = (local_var_200 == local_var_201);
sc_biguint<1> local_var_203 = 1;
sc_biguint<1> local_var_204 = 0;
auto local_var_205 = (local_var_202) ? local_var_203 : local_var_204;
sc_biguint<1> local_var_206 = (local_var_199 | local_var_205);
auto local_var_207 = local_var_17.range(4, 4);
sc_biguint<1> local_var_208 = 1;
bool local_var_209 = (local_var_207 == local_var_208);
sc_biguint<1> local_var_210 = 1;
sc_biguint<1> local_var_211 = 0;
auto local_var_212 = (local_var_209) ? local_var_210 : local_var_211;
sc_biguint<1> local_var_213 = (local_var_206 | local_var_212);
auto local_var_214 = local_var_17.range(3, 3);
sc_biguint<1> local_var_215 = 1;
bool local_var_216 = (local_var_214 == local_var_215);
sc_biguint<1> local_var_217 = 1;
sc_biguint<1> local_var_218 = 0;
auto local_var_219 = (local_var_216) ? local_var_217 : local_var_218;
sc_biguint<1> local_var_220 = (local_var_213 | local_var_219);
auto local_var_221 = local_var_17.range(2, 2);
sc_biguint<1> local_var_222 = 1;
bool local_var_223 = (local_var_221 == local_var_222);
sc_biguint<1> local_var_224 = 1;
sc_biguint<1> local_var_225 = 0;
auto local_var_226 = (local_var_223) ? local_var_224 : local_var_225;
sc_biguint<1> local_var_227 = (local_var_220 | local_var_226);
auto local_var_228 = local_var_17.range(1, 1);
sc_biguint<1> local_var_229 = 1;
bool local_var_230 = (local_var_228 == local_var_229);
sc_biguint<1> local_var_231 = 1;
sc_biguint<1> local_var_232 = 0;
auto local_var_233 = (local_var_230) ? local_var_231 : local_var_232;
sc_biguint<1> local_var_234 = (local_var_227 | local_var_233);
auto local_var_235 = local_var_234.range(0, 0);
sc_biguint<1> local_var_236 = 0;
bool local_var_237 = (local_var_235 == local_var_236);
auto local_var_238 = local_var_17.range(0, 0);
sc_biguint<1> local_var_239 = 1;
bool local_var_240 = (local_var_238 == local_var_239);
bool local_var_241 = (local_var_237 & local_var_240);
sc_biguint<32> local_var_242 = 0;
auto local_var_243 = local_var_227.range(0, 0);
sc_biguint<1> local_var_244 = 0;
bool local_var_245 = (local_var_243 == local_var_244);
auto local_var_246 = local_var_17.range(1, 1);
sc_biguint<1> local_var_247 = 1;
bool local_var_248 = (local_var_246 == local_var_247);
bool local_var_249 = (local_var_245 & local_var_248);
sc_biguint<32> local_var_250 = 1;
auto local_var_251 = local_var_220.range(0, 0);
sc_biguint<1> local_var_252 = 0;
bool local_var_253 = (local_var_251 == local_var_252);
auto local_var_254 = local_var_17.range(2, 2);
sc_biguint<1> local_var_255 = 1;
bool local_var_256 = (local_var_254 == local_var_255);
bool local_var_257 = (local_var_253 & local_var_256);
sc_biguint<32> local_var_258 = 2;
auto local_var_259 = local_var_213.range(0, 0);
sc_biguint<1> local_var_260 = 0;
bool local_var_261 = (local_var_259 == local_var_260);
auto local_var_262 = local_var_17.range(3, 3);
sc_biguint<1> local_var_263 = 1;
bool local_var_264 = (local_var_262 == local_var_263);
bool local_var_265 = (local_var_261 & local_var_264);
sc_biguint<32> local_var_266 = 3;
auto local_var_267 = local_var_206.range(0, 0);
sc_biguint<1> local_var_268 = 0;
bool local_var_269 = (local_var_267 == local_var_268);
auto local_var_270 = local_var_17.range(4, 4);
sc_biguint<1> local_var_271 = 1;
bool local_var_272 = (local_var_270 == local_var_271);
bool local_var_273 = (local_var_269 & local_var_272);
sc_biguint<32> local_var_274 = 4;
auto local_var_275 = local_var_199.range(0, 0);
sc_biguint<1> local_var_276 = 0;
bool local_var_277 = (local_var_275 == local_var_276);
auto local_var_278 = local_var_17.range(5, 5);
sc_biguint<1> local_var_279 = 1;
bool local_var_280 = (local_var_278 == local_var_279);
bool local_var_281 = (local_var_277 & local_var_280);
sc_biguint<32> local_var_282 = 5;
auto local_var_283 = local_var_192.range(0, 0);
sc_biguint<1> local_var_284 = 0;
bool local_var_285 = (local_var_283 == local_var_284);
auto local_var_286 = local_var_17.range(6, 6);
sc_biguint<1> local_var_287 = 1;
bool local_var_288 = (local_var_286 == local_var_287);
bool local_var_289 = (local_var_285 & local_var_288);
sc_biguint<32> local_var_290 = 6;
auto local_var_291 = local_var_185.range(0, 0);
sc_biguint<1> local_var_292 = 0;
bool local_var_293 = (local_var_291 == local_var_292);
auto local_var_294 = local_var_17.range(7, 7);
sc_biguint<1> local_var_295 = 1;
bool local_var_296 = (local_var_294 == local_var_295);
bool local_var_297 = (local_var_293 & local_var_296);
sc_biguint<32> local_var_298 = 7;
auto local_var_299 = local_var_178.range(0, 0);
sc_biguint<1> local_var_300 = 0;
bool local_var_301 = (local_var_299 == local_var_300);
auto local_var_302 = local_var_17.range(8, 8);
sc_biguint<1> local_var_303 = 1;
bool local_var_304 = (local_var_302 == local_var_303);
bool local_var_305 = (local_var_301 & local_var_304);
sc_biguint<32> local_var_306 = 8;
auto local_var_307 = local_var_171.range(0, 0);
sc_biguint<1> local_var_308 = 0;
bool local_var_309 = (local_var_307 == local_var_308);
auto local_var_310 = local_var_17.range(9, 9);
sc_biguint<1> local_var_311 = 1;
bool local_var_312 = (local_var_310 == local_var_311);
bool local_var_313 = (local_var_309 & local_var_312);
sc_biguint<32> local_var_314 = 9;
auto local_var_315 = local_var_164.range(0, 0);
sc_biguint<1> local_var_316 = 0;
bool local_var_317 = (local_var_315 == local_var_316);
auto local_var_318 = local_var_17.range(10, 10);
sc_biguint<1> local_var_319 = 1;
bool local_var_320 = (local_var_318 == local_var_319);
bool local_var_321 = (local_var_317 & local_var_320);
sc_biguint<32> local_var_322 = 10;
auto local_var_323 = local_var_157.range(0, 0);
sc_biguint<1> local_var_324 = 0;
bool local_var_325 = (local_var_323 == local_var_324);
auto local_var_326 = local_var_17.range(11, 11);
sc_biguint<1> local_var_327 = 1;
bool local_var_328 = (local_var_326 == local_var_327);
bool local_var_329 = (local_var_325 & local_var_328);
sc_biguint<32> local_var_330 = 11;
auto local_var_331 = local_var_150.range(0, 0);
sc_biguint<1> local_var_332 = 0;
bool local_var_333 = (local_var_331 == local_var_332);
auto local_var_334 = local_var_17.range(12, 12);
sc_biguint<1> local_var_335 = 1;
bool local_var_336 = (local_var_334 == local_var_335);
bool local_var_337 = (local_var_333 & local_var_336);
sc_biguint<32> local_var_338 = 12;
auto local_var_339 = local_var_143.range(0, 0);
sc_biguint<1> local_var_340 = 0;
bool local_var_341 = (local_var_339 == local_var_340);
auto local_var_342 = local_var_17.range(13, 13);
sc_biguint<1> local_var_343 = 1;
bool local_var_344 = (local_var_342 == local_var_343);
bool local_var_345 = (local_var_341 & local_var_344);
sc_biguint<32> local_var_346 = 13;
auto local_var_347 = local_var_136.range(0, 0);
sc_biguint<1> local_var_348 = 0;
bool local_var_349 = (local_var_347 == local_var_348);
auto local_var_350 = local_var_17.range(14, 14);
sc_biguint<1> local_var_351 = 1;
bool local_var_352 = (local_var_350 == local_var_351);
bool local_var_353 = (local_var_349 & local_var_352);
sc_biguint<32> local_var_354 = 14;
auto local_var_355 = local_var_129.range(0, 0);
sc_biguint<1> local_var_356 = 0;
bool local_var_357 = (local_var_355 == local_var_356);
auto local_var_358 = local_var_17.range(15, 15);
sc_biguint<1> local_var_359 = 1;
bool local_var_360 = (local_var_358 == local_var_359);
bool local_var_361 = (local_var_357 & local_var_360);
sc_biguint<32> local_var_362 = 15;
auto local_var_363 = local_var_122.range(0, 0);
sc_biguint<1> local_var_364 = 0;
bool local_var_365 = (local_var_363 == local_var_364);
auto local_var_366 = local_var_17.range(16, 16);
sc_biguint<1> local_var_367 = 1;
bool local_var_368 = (local_var_366 == local_var_367);
bool local_var_369 = (local_var_365 & local_var_368);
sc_biguint<32> local_var_370 = 16;
auto local_var_371 = local_var_115.range(0, 0);
sc_biguint<1> local_var_372 = 0;
bool local_var_373 = (local_var_371 == local_var_372);
auto local_var_374 = local_var_17.range(17, 17);
sc_biguint<1> local_var_375 = 1;
bool local_var_376 = (local_var_374 == local_var_375);
bool local_var_377 = (local_var_373 & local_var_376);
sc_biguint<32> local_var_378 = 17;
auto local_var_379 = local_var_108.range(0, 0);
sc_biguint<1> local_var_380 = 0;
bool local_var_381 = (local_var_379 == local_var_380);
auto local_var_382 = local_var_17.range(18, 18);
sc_biguint<1> local_var_383 = 1;
bool local_var_384 = (local_var_382 == local_var_383);
bool local_var_385 = (local_var_381 & local_var_384);
sc_biguint<32> local_var_386 = 18;
auto local_var_387 = local_var_101.range(0, 0);
sc_biguint<1> local_var_388 = 0;
bool local_var_389 = (local_var_387 == local_var_388);
auto local_var_390 = local_var_17.range(19, 19);
sc_biguint<1> local_var_391 = 1;
bool local_var_392 = (local_var_390 == local_var_391);
bool local_var_393 = (local_var_389 & local_var_392);
sc_biguint<32> local_var_394 = 19;
auto local_var_395 = local_var_94.range(0, 0);
sc_biguint<1> local_var_396 = 0;
bool local_var_397 = (local_var_395 == local_var_396);
auto local_var_398 = local_var_17.range(20, 20);
sc_biguint<1> local_var_399 = 1;
bool local_var_400 = (local_var_398 == local_var_399);
bool local_var_401 = (local_var_397 & local_var_400);
sc_biguint<32> local_var_402 = 20;
auto local_var_403 = local_var_87.range(0, 0);
sc_biguint<1> local_var_404 = 0;
bool local_var_405 = (local_var_403 == local_var_404);
auto local_var_406 = local_var_17.range(21, 21);
sc_biguint<1> local_var_407 = 1;
bool local_var_408 = (local_var_406 == local_var_407);
bool local_var_409 = (local_var_405 & local_var_408);
sc_biguint<32> local_var_410 = 21;
auto local_var_411 = local_var_80.range(0, 0);
sc_biguint<1> local_var_412 = 0;
bool local_var_413 = (local_var_411 == local_var_412);
auto local_var_414 = local_var_17.range(22, 22);
sc_biguint<1> local_var_415 = 1;
bool local_var_416 = (local_var_414 == local_var_415);
bool local_var_417 = (local_var_413 & local_var_416);
sc_biguint<32> local_var_418 = 22;
auto local_var_419 = local_var_73.range(0, 0);
sc_biguint<1> local_var_420 = 0;
bool local_var_421 = (local_var_419 == local_var_420);
auto local_var_422 = local_var_17.range(23, 23);
sc_biguint<1> local_var_423 = 1;
bool local_var_424 = (local_var_422 == local_var_423);
bool local_var_425 = (local_var_421 & local_var_424);
sc_biguint<32> local_var_426 = 23;
auto local_var_427 = local_var_66.range(0, 0);
sc_biguint<1> local_var_428 = 0;
bool local_var_429 = (local_var_427 == local_var_428);
auto local_var_430 = local_var_17.range(24, 24);
sc_biguint<1> local_var_431 = 1;
bool local_var_432 = (local_var_430 == local_var_431);
bool local_var_433 = (local_var_429 & local_var_432);
sc_biguint<32> local_var_434 = 24;
auto local_var_435 = local_var_59.range(0, 0);
sc_biguint<1> local_var_436 = 0;
bool local_var_437 = (local_var_435 == local_var_436);
auto local_var_438 = local_var_17.range(25, 25);
sc_biguint<1> local_var_439 = 1;
bool local_var_440 = (local_var_438 == local_var_439);
bool local_var_441 = (local_var_437 & local_var_440);
sc_biguint<32> local_var_442 = 25;
auto local_var_443 = local_var_52.range(0, 0);
sc_biguint<1> local_var_444 = 0;
bool local_var_445 = (local_var_443 == local_var_444);
auto local_var_446 = local_var_17.range(26, 26);
sc_biguint<1> local_var_447 = 1;
bool local_var_448 = (local_var_446 == local_var_447);
bool local_var_449 = (local_var_445 & local_var_448);
sc_biguint<32> local_var_450 = 26;
auto local_var_451 = local_var_45.range(0, 0);
sc_biguint<1> local_var_452 = 0;
bool local_var_453 = (local_var_451 == local_var_452);
auto local_var_454 = local_var_17.range(27, 27);
sc_biguint<1> local_var_455 = 1;
bool local_var_456 = (local_var_454 == local_var_455);
bool local_var_457 = (local_var_453 & local_var_456);
sc_biguint<32> local_var_458 = 27;
auto local_var_459 = local_var_38.range(0, 0);
sc_biguint<1> local_var_460 = 0;
bool local_var_461 = (local_var_459 == local_var_460);
auto local_var_462 = local_var_17.range(28, 28);
sc_biguint<1> local_var_463 = 1;
bool local_var_464 = (local_var_462 == local_var_463);
bool local_var_465 = (local_var_461 & local_var_464);
sc_biguint<32> local_var_466 = 28;
auto local_var_467 = local_var_31.range(0, 0);
sc_biguint<1> local_var_468 = 0;
bool local_var_469 = (local_var_467 == local_var_468);
auto local_var_470 = local_var_17.range(29, 29);
sc_biguint<1> local_var_471 = 1;
bool local_var_472 = (local_var_470 == local_var_471);
bool local_var_473 = (local_var_469 & local_var_472);
sc_biguint<32> local_var_474 = 29;
auto local_var_475 = local_var_24.range(0, 0);
sc_biguint<1> local_var_476 = 0;
bool local_var_477 = (local_var_475 == local_var_476);
auto local_var_478 = local_var_17.range(30, 30);
sc_biguint<1> local_var_479 = 1;
bool local_var_480 = (local_var_478 == local_var_479);
bool local_var_481 = (local_var_477 & local_var_480);
sc_biguint<32> local_var_482 = 30;
auto local_var_483 = local_var_14.range(0, 0);
sc_biguint<1> local_var_484 = 0;
bool local_var_485 = (local_var_483 == local_var_484);
auto local_var_486 = local_var_17.range(31, 31);
sc_biguint<1> local_var_487 = 1;
bool local_var_488 = (local_var_486 == local_var_487);
bool local_var_489 = (local_var_485 & local_var_488);
sc_biguint<32> local_var_490 = 31;
sc_biguint<32> local_var_491 = 0;
auto local_var_492 = (local_var_489) ? local_var_490 : local_var_491;
auto local_var_493 = (local_var_481) ? local_var_482 : local_var_492;
auto local_var_494 = (local_var_473) ? local_var_474 : local_var_493;
auto local_var_495 = (local_var_465) ? local_var_466 : local_var_494;
auto local_var_496 = (local_var_457) ? local_var_458 : local_var_495;
auto local_var_497 = (local_var_449) ? local_var_450 : local_var_496;
auto local_var_498 = (local_var_441) ? local_var_442 : local_var_497;
auto local_var_499 = (local_var_433) ? local_var_434 : local_var_498;
auto local_var_500 = (local_var_425) ? local_var_426 : local_var_499;
auto local_var_501 = (local_var_417) ? local_var_418 : local_var_500;
auto local_var_502 = (local_var_409) ? local_var_410 : local_var_501;
auto local_var_503 = (local_var_401) ? local_var_402 : local_var_502;
auto local_var_504 = (local_var_393) ? local_var_394 : local_var_503;
auto local_var_505 = (local_var_385) ? local_var_386 : local_var_504;
auto local_var_506 = (local_var_377) ? local_var_378 : local_var_505;
auto local_var_507 = (local_var_369) ? local_var_370 : local_var_506;
auto local_var_508 = (local_var_361) ? local_var_362 : local_var_507;
auto local_var_509 = (local_var_353) ? local_var_354 : local_var_508;
auto local_var_510 = (local_var_345) ? local_var_346 : local_var_509;
auto local_var_511 = (local_var_337) ? local_var_338 : local_var_510;
auto local_var_512 = (local_var_329) ? local_var_330 : local_var_511;
auto local_var_513 = (local_var_321) ? local_var_322 : local_var_512;
auto local_var_514 = (local_var_313) ? local_var_314 : local_var_513;
auto local_var_515 = (local_var_305) ? local_var_306 : local_var_514;
auto local_var_516 = (local_var_297) ? local_var_298 : local_var_515;
auto local_var_517 = (local_var_289) ? local_var_290 : local_var_516;
auto local_var_518 = (local_var_281) ? local_var_282 : local_var_517;
auto local_var_519 = (local_var_273) ? local_var_274 : local_var_518;
auto local_var_520 = (local_var_265) ? local_var_266 : local_var_519;
auto local_var_521 = (local_var_257) ? local_var_258 : local_var_520;
auto local_var_522 = (local_var_249) ? local_var_250 : local_var_521;
auto local_var_523 = (local_var_241) ? local_var_242 : local_var_522;
sc_biguint<16> local_var_524 = 0;
univ_var_298 = (sc_biguint<16>(local_var_524), sc_biguint<16>(sdp_s_lut_data));
sc_biguint<32> local_var_526 = (univ_var_298 - sdp_s_lut_le_start);
auto local_var_527 = (local_var_13) ? local_var_523 : local_var_526;
sc_biguint<24> local_var_528 = 0;
univ_var_299 = (sc_biguint<24>(local_var_528), sc_biguint<8>(sdp_s_lut_le_index_offset));
bool local_var_531 = (local_var_527 < univ_var_299);
sc_biguint<32> local_var_532 = 0;
sc_biguint<1> local_var_533 = 0;
bool local_var_534 = (local_var_1 == local_var_533);
sc_biguint<24> local_var_535 = 0;
univ_var_300 = (sc_biguint<24>(local_var_535), sc_biguint<8>(sdp_s_lut_le_index_offset));
sc_biguint<32> local_var_537 = (local_var_527 - univ_var_300);
sc_biguint<24> local_var_538 = 0;
univ_var_301 = (sc_biguint<24>(local_var_538), sc_biguint<8>(sdp_s_lut_le_index_select));
sc_biguint<32> local_var_541 = (local_var_527 >> univ_var_301);
auto local_var_542 = (local_var_534) ? local_var_537 : local_var_541;
sc_biguint<32> local_var_543 = 64;
bool local_var_544 = (local_var_542 == local_var_543);
bool local_var_545 = (local_var_542 > local_var_543);
bool local_var_546 = (local_var_544 | local_var_545);
sc_biguint<32> local_var_547 = 0;
sc_biguint<16> local_var_548 = 0;
univ_var_302 = (sc_biguint<16>(local_var_548), sc_biguint<16>(sdp_s_lut_data));
sc_biguint<32> local_var_550 = (univ_var_302 - sdp_s_lut_le_start);
sc_biguint<32> local_var_551 = 1;
sc_biguint<32> local_var_552 = (local_var_551 << local_var_527);
sc_biguint<32> local_var_553 = 1;
sc_biguint<32> local_var_554 = (local_var_552 - local_var_553);
sc_biguint<32> local_var_555 = (local_var_550 & local_var_554);
sc_biguint<32> local_var_556 = 35;
sc_biguint<32> local_var_557 = (local_var_556 - local_var_527);
sc_biguint<32> local_var_558 = (local_var_555 << local_var_557);
auto local_var_559 = (local_var_546) ? local_var_547 : local_var_558;
auto local_var_560 = (local_var_531) ? local_var_532 : local_var_559;
auto local_var_561 = (local_var_10) ? local_var_11 : local_var_560;
sc_biguint<16> local_var_562 = 0;
univ_var_303 = (sc_biguint<16>(local_var_562), sc_biguint<16>(sdp_s_lut_data));
bool local_var_564 = (univ_var_303 == sdp_s_lut_le_start);
bool local_var_565 = (univ_var_303 < sdp_s_lut_le_start);
bool local_var_566 = (local_var_564 | local_var_565);
sc_biguint<32> local_var_567 = 0;
sc_biguint<32> local_var_568 = 64;
bool local_var_569 = (local_var_542 == local_var_568);
bool local_var_570 = (local_var_542 > local_var_568);
bool local_var_571 = (local_var_569 | local_var_570);
sc_biguint<32> local_var_572 = 0;
sc_biguint<32> local_var_573 = 1;
sc_biguint<24> local_var_574 = 0;
univ_var_304 = (sc_biguint<24>(local_var_574), sc_biguint<8>(sdp_s_lut_le_index_select));
sc_biguint<32> local_var_576 = (local_var_573 << univ_var_304);
sc_biguint<32> local_var_577 = 1;
sc_biguint<32> local_var_578 = (local_var_576 - local_var_577);
sc_biguint<32> local_var_579 = (local_var_527 & local_var_578);
sc_biguint<24> local_var_580 = 0;
univ_var_305 = (sc_biguint<24>(local_var_580), sc_biguint<8>(sdp_s_lut_le_index_select));
sc_biguint<32> local_var_582 = 35;
sc_biguint<32> local_var_583 = (univ_var_305 - local_var_582);
sc_biguint<32> local_var_584 = (local_var_579 >> local_var_583);
auto local_var_585 = (local_var_571) ? local_var_572 : local_var_584;
auto local_var_586 = (local_var_566) ? local_var_567 : local_var_585;
auto local_var_587 = (local_var_3) ? local_var_561 : local_var_586;
auto local_var_588 = local_var_587.range(6, 0);
auto local_var_588_nxt_holder = local_var_588;
sc_biguint<1> local_var_589 = 0;
bool local_var_590 = (local_var_1 == local_var_589);
sc_biguint<16> local_var_591 = 0;
univ_var_306 = (sc_biguint<16>(local_var_591), sc_biguint<16>(sdp_s_lut_data));
bool local_var_593 = (univ_var_306 == sdp_s_lut_le_start);
bool local_var_594 = (univ_var_306 < sdp_s_lut_le_start);
bool local_var_595 = (local_var_593 | local_var_594);
sc_biguint<32> local_var_596 = 1;
sc_biguint<24> local_var_597 = 0;
univ_var_307 = (sc_biguint<24>(local_var_597), sc_biguint<8>(sdp_s_lut_le_index_offset));
bool local_var_599 = (local_var_527 < univ_var_307);
sc_biguint<32> local_var_600 = 1;
sc_biguint<32> local_var_601 = 64;
bool local_var_602 = (local_var_542 == local_var_601);
bool local_var_603 = (local_var_542 > local_var_601);
bool local_var_604 = (local_var_602 | local_var_603);
sc_biguint<32> local_var_605 = 64;
auto local_var_606 = (local_var_604) ? local_var_605 : local_var_542;
auto local_var_607 = (local_var_599) ? local_var_600 : local_var_606;
auto local_var_608 = (local_var_595) ? local_var_596 : local_var_607;
sc_biguint<16> local_var_609 = 0;
univ_var_308 = (sc_biguint<16>(local_var_609), sc_biguint<16>(sdp_s_lut_data));
bool local_var_611 = (univ_var_308 == sdp_s_lut_le_start);
bool local_var_612 = (univ_var_308 < sdp_s_lut_le_start);
bool local_var_613 = (local_var_611 | local_var_612);
sc_biguint<32> local_var_614 = 0;
sc_biguint<32> local_var_615 = 64;
bool local_var_616 = (local_var_542 == local_var_615);
bool local_var_617 = (local_var_542 > local_var_615);
bool local_var_618 = (local_var_616 | local_var_617);
sc_biguint<32> local_var_619 = 64;
auto local_var_620 = (local_var_618) ? local_var_619 : local_var_542;
auto local_var_621 = (local_var_613) ? local_var_614 : local_var_620;
auto local_var_622 = (local_var_590) ? local_var_608 : local_var_621;
auto local_var_623 = local_var_622.range(6, 0);
auto local_var_623_nxt_holder = local_var_623;
sc_biguint<1> local_var_624 = 0;
bool local_var_625 = (local_var_1 == local_var_624);
sc_biguint<16> local_var_626 = 0;
univ_var_309 = (sc_biguint<16>(local_var_626), sc_biguint<16>(sdp_s_lut_data));
bool local_var_628 = (univ_var_309 == sdp_s_lut_le_start);
bool local_var_629 = (univ_var_309 < sdp_s_lut_le_start);
bool local_var_630 = (local_var_628 | local_var_629);
sc_biguint<1> local_var_631 = 0;
sc_biguint<24> local_var_632 = 0;
univ_var_310 = (sc_biguint<24>(local_var_632), sc_biguint<8>(sdp_s_lut_le_index_offset));
bool local_var_634 = (local_var_527 < univ_var_310);
sc_biguint<1> local_var_635 = 0;
sc_biguint<32> local_var_636 = 64;
bool local_var_637 = (local_var_542 == local_var_636);
bool local_var_638 = (local_var_542 > local_var_636);
bool local_var_639 = (local_var_637 | local_var_638);
sc_biguint<1> local_var_640 = 1;
sc_biguint<1> local_var_641 = 0;
auto local_var_642 = (local_var_639) ? local_var_640 : local_var_641;
auto local_var_643 = (local_var_634) ? local_var_635 : local_var_642;
auto local_var_644 = (local_var_630) ? local_var_631 : local_var_643;
sc_biguint<16> local_var_645 = 0;
univ_var_311 = (sc_biguint<16>(local_var_645), sc_biguint<16>(sdp_s_lut_data));
bool local_var_647 = (univ_var_311 == sdp_s_lut_le_start);
bool local_var_648 = (univ_var_311 < sdp_s_lut_le_start);
bool local_var_649 = (local_var_647 | local_var_648);
sc_biguint<1> local_var_650 = 0;
sc_biguint<32> local_var_651 = 64;
bool local_var_652 = (local_var_542 == local_var_651);
bool local_var_653 = (local_var_542 > local_var_651);
bool local_var_654 = (local_var_652 | local_var_653);
sc_biguint<1> local_var_655 = 1;
sc_biguint<1> local_var_656 = 0;
auto local_var_657 = (local_var_654) ? local_var_655 : local_var_656;
auto local_var_658 = (local_var_649) ? local_var_650 : local_var_657;
auto local_var_659 = (local_var_625) ? local_var_644 : local_var_658;
auto local_var_659_nxt_holder = local_var_659;
sc_biguint<1> local_var_660 = 0;
bool local_var_661 = (local_var_1 == local_var_660);
sc_biguint<16> local_var_662 = 0;
univ_var_312 = (sc_biguint<16>(local_var_662), sc_biguint<16>(sdp_s_lut_data));
bool local_var_664 = (univ_var_312 == sdp_s_lut_le_start);
bool local_var_665 = (univ_var_312 < sdp_s_lut_le_start);
bool local_var_666 = (local_var_664 | local_var_665);
sc_biguint<1> local_var_667 = 1;
sc_biguint<24> local_var_668 = 0;
univ_var_313 = (sc_biguint<24>(local_var_668), sc_biguint<8>(sdp_s_lut_le_index_offset));
bool local_var_670 = (local_var_527 < univ_var_313);
sc_biguint<1> local_var_671 = 1;
sc_biguint<1> local_var_672 = 0;
auto local_var_673 = (local_var_670) ? local_var_671 : local_var_672;
auto local_var_674 = (local_var_666) ? local_var_667 : local_var_673;
sc_biguint<16> local_var_675 = 0;
univ_var_314 = (sc_biguint<16>(local_var_675), sc_biguint<16>(sdp_s_lut_data));
bool local_var_677 = (univ_var_314 == sdp_s_lut_le_start);
bool local_var_678 = (univ_var_314 < sdp_s_lut_le_start);
bool local_var_679 = (local_var_677 | local_var_678);
sc_biguint<1> local_var_680 = 1;
sc_biguint<1> local_var_681 = 0;
auto local_var_682 = (local_var_679) ? local_var_680 : local_var_681;
auto local_var_683 = (local_var_661) ? local_var_674 : local_var_682;
auto local_var_683_nxt_holder = local_var_683;
sdp_le_fraction = local_var_588_nxt_holder;
sdp_le_index = local_var_623_nxt_holder;
sdp_le_oflow = local_var_659_nxt_holder;
sdp_le_uflow = local_var_683_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "Read_LUT_LE state updates:" << std::endl;
instr_update_log << "    sdp_le_fraction => " << std::hex << "0x" << sdp_le_fraction << std::endl; 
instr_update_log << "    sdp_le_index => " << std::hex << "0x" << sdp_le_index << std::endl; 
instr_update_log << "    sdp_le_oflow => " << std::hex << "0x" << sdp_le_oflow << std::endl; 
instr_update_log << "    sdp_le_uflow => " << std::hex << "0x" << sdp_le_uflow << std::endl; 
instr_update_log << std::endl;
#endif
}
