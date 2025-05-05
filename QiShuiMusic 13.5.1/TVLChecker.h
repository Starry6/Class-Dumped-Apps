@interface TVLChecker : NSObject
@property (nonatomic) <TVLCheckerDelegate> delegate;
- (void)hasDetectedEventWithKey:eventInfo:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
+ (id)checkerWithConfiguration:;
@end
