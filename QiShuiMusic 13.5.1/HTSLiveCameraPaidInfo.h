@interface HTSLiveCameraPaidInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL needDeliveryNotice;
@property (nonatomic) NSInteger maxDuration;
@property (nonatomic) q duration;
@property (nonatomic) HTSLiveCameraPaidInfo_PriceInfo priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (nonatomic) HTSLivePaidLiveBaseInfo paidLiveBaseInfo;
@property (nonatomic) BOOL hasPaidLiveBaseInfo;
@property (nonatomic) HTSLiveCameraPaidInfo_PaidLiveBizExtra paidLiveBizExtra;
@property (nonatomic) BOOL hasPaidLiveBizExtra;
- (BOOL)isNeedDeliveryNotice;
- (void)setNeedDeliveryNotice:;
+ (id)descriptor;
@end
