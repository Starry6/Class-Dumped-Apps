@interface AWEPlayletPaymentLimitFreeInfo : AWEBaseApiModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (double)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
