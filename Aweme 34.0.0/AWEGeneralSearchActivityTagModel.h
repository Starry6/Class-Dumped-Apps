@interface AWEGeneralSearchActivityTagModel : AWEBaseApiModel
@property (nonatomic) q tagID;
@property (nonatomic) AWEGeneralSearchActivityTagConfigModel tagConfig;
- (long long)tagID;
- (void).cxx_destruct;
- (void)setTagID:;
- (void)setTagConfig:;
- (id)tagConfig;
+ (id)JSONKeyPathsByPropertyKey;
@end
