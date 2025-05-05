@interface ARCoachingUpdateManager : NSObject
@property (nonatomic) <ARCoachingUpdateManagerDelegate> delegate;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (id)delegate;
- (void).cxx_destruct;
- (void)update;
- (id)init:metalLayer:;
- (void)drawWithTimeDelta:;
@end
