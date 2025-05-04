@interface AWENearbyGrouponIconRuleModel : AWEBaseApiModel
@property (nonatomic) Q scene;
@property (nonatomic) Q duration;
- (void)setScene:;
- (unsigned long long)scene;
- (void)setDuration:;
- (unsigned long long)duration;
+ (id)JSONKeyPathsByPropertyKey;
@end
