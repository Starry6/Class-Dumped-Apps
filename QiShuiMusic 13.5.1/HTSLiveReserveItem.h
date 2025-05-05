@interface HTSLiveReserveItem : IESLivePBBaseMessage
@property (nonatomic) NSString reserveTodayNum;
@property (nonatomic) NSString reserveTotalNum;
@property (nonatomic) NSInteger reserveStatus;
+ (id)descriptor;
@end
