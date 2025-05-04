@interface AWEMusicExtraDouyinBeatsInfoModel : AWEBaseDataModel
@property (nonatomic) NSNumber minVideoNumber;
@property (nonatomic) NSNumber maxVideoNumber;
@property (nonatomic) q algorithmType;
@property (nonatomic) NSString manMadeBeatsURLString;
- (id)minVideoNumber;
- (void)setMinVideoNumber:;
- (id)maxVideoNumber;
- (void)setMaxVideoNumber:;
- (id)manMadeBeatsURLString;
- (void)setManMadeBeatsURLString:;
- (void).cxx_destruct;
- (long long)algorithmType;
- (void)setAlgorithmType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
