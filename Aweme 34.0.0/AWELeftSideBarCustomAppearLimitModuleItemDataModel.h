@interface AWELeftSideBarCustomAppearLimitModuleItemDataModel : AWELeftSideBarCustomModuleItemDataModel
@property (nonatomic) q firstAppearLimit;
@property (nonatomic) q exitLimit;
- (long long)firstAppearLimit;
- (long long)exitLimit;
- (void)setFirstAppearLimit:;
- (void)setExitLimit:;
- (id)description;
+ (id)JSONKeyPathsByPropertyKey;
@end
