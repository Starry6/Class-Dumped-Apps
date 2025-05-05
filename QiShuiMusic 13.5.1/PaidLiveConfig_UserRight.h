@interface PaidLiveConfig_UserRight : IESLivePBBaseMessage
@property (nonatomic) NSInteger viewRight;
@property (nonatomic) q duration;
@property (nonatomic) NSInteger delivery;
@property (nonatomic) BOOL needDeliveryNotice;
+ (id)descriptor;
@end
