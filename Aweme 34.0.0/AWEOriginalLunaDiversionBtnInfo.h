@interface AWEOriginalLunaDiversionBtnInfo : AWEBaseApiModel
@property (nonatomic) NSString btnKey;
@property (nonatomic) NSString btnValue;
@property (nonatomic) NSString btnSchema;
@property (nonatomic) BOOL isAlbumSell;
@property (nonatomic) BOOL isDiversion;
- (id)btnSchema;
- (void)setBtnSchema:;
- (id)btnKey;
- (BOOL)isDiversion;
- (BOOL)isAlbumSell;
- (void)setBtnKey:;
- (id)btnValue;
- (void)setBtnValue:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
