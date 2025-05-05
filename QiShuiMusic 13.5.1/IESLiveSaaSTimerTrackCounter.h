@interface IESLiveSaaSTimerTrackCounter : NSObject
@property (nonatomic) NSDate preDate;
@property (nonatomic) q sumSeconds;
- (id)preDate;
- (long long)getCounter;
- (void)setPreDate:;
- (void)setSumSeconds:;
- (long long)sumSeconds;
- (void)start;
- (void)clear;
- (void).cxx_destruct;
- (void)pause;
@end
