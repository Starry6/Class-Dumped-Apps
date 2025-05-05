@interface LSEffectContourInfoHelper : NSObject
@property (nonatomic) <LSEffectContourInfoHelperDataSource> datasource;
@property (nonatomic) ^{contour_info_st=CSS{con_string_=S[0C]}{contour_extra_=CS[0C]}C[0{contour_item_=S[0{point_=SS}]}]} effectContourInfo;
- (int)compressContourInfoWithInData:inSize:outData:outSize:;
- (id)convertContourInfoWithFindContourBuffer:dataLength:;
- (int)correctContourInfoWithData:;
- (id)effectContourInfo;
- (void)setEffectContourInfo:;
- (int)unCompressContourInfoWithInData:inSize:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)datasource;
- (void)setDatasource:;
@end
