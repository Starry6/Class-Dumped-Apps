@interface AWEPrivateListSettingsModel : AWEBaseApiModel
@property (nonatomic) BOOL isVisible;
@property (nonatomic) q totalCount;
- (long long)totalCount;
- (void)setIsVisible:;
- (BOOL)isVisible;
- (void)setTotalCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
