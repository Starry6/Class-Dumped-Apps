@interface CJPayBindCardUISettingsModel : JSONModel
@property (nonatomic) BOOL isShowIDProfileCard;
@property (nonatomic) BOOL updateMerchantId;
@property (nonatomic) q userInputCacheDuration;
- (BOOL)isShowIDProfileCard;
- (void)setIsShowIDProfileCard:;
- (void)setUpdateMerchantId:;
- (void)setUserInputCacheDuration:;
- (BOOL)updateMerchantId;
- (long long)userInputCacheDuration;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
