@interface MNTraceAnnotatedUserBehaviorRow : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) q event;
- (void)setEvent:;
- (long long)event;
- (void)setTimestamp:;
- (double)timestamp;
@end
