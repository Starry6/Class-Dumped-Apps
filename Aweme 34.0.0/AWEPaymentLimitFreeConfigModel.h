@interface AWEPaymentLimitFreeConfigModel : AWEBaseApiModel
@property (nonatomic) BOOL isInLimitFree;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
- (BOOL)isInLimitFree;
- (void)setIsInLimitFree:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (double)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
