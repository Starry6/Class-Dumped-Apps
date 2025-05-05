@interface GKNATObserver : NSObject
@property (nonatomic) NSObject<GKNATObserverDelegate> delegate;
- (void)shouldTryNATCheck;
- (id)initWithOptions:;
- (int)currentNATType;
- (void)setDelegate:;
- (id)delegate;
+ (id)allocWithZone:;
@end
