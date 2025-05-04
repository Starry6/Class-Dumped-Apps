@interface AWEIMInfoOtherResponseFloatingBarInfoModel : IESIMBaseApiModel
@property (nonatomic) BOOL showSetJoinGroupGiftCoupon;
@property (nonatomic) NSArray generalFloatingBars;
- (id)generalFloatingBars;
- (void)setGeneralFloatingBars:;
- (BOOL)showSetJoinGroupGiftCoupon;
- (void)setShowSetJoinGroupGiftCoupon:;
- (void).cxx_destruct;
+ (id)generalFloatingBarsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
