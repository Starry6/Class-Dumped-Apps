@interface AWEIMCommerceCouponResultModel : IESIMBaseApiModel
@property (nonatomic) q applyStatus;
@property (nonatomic) NSString toast;
@property (nonatomic) AWEIMCommerceCouponStatusInfoModel statusModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
- (id)statusModel;
- (void)setStatusModel:;
- (long long)applyStatus;
- (void)setApplyStatus:;
+ (id)statusModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
