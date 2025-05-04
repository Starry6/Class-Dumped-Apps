@interface AWECodeGenBannerExtraInfoModel : AWEBaseDataModel
@property (nonatomic) BOOL exclusive;
@property (nonatomic) q weight;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL enableSelect;
@property (nonatomic) NSString source;
- (BOOL)enableSelect;
- (void)setEnableSelect:;
- (void)setWeight:;
- (long long)weight;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (BOOL)selected;
- (void)setSelected:;
- (void)setExclusive:;
- (BOOL)exclusive;
+ (id)JSONKeyPathsByPropertyKey;
@end
