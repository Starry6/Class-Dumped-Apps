@interface AWEIMConsecutiveChatBasicModel : AWEBaseApiModel
@property (nonatomic) double limitStartTime;
@property (nonatomic) double limitEndTime;
- (double)limitStartTime;
- (double)limitEndTime;
- (void)setLimitStartTime:;
- (void)setLimitEndTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
