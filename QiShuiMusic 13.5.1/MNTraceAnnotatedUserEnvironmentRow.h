@interface MNTraceAnnotatedUserEnvironmentRow : NSObject
@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
@property (nonatomic) q environmentType;
- (double)endTimestamp;
- (double)startTimestamp;
- (void)setEndTimestamp:;
- (void)setStartTimestamp:;
- (long long)environmentType;
- (void)setEnvironmentType:;
@end
