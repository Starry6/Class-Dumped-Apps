@interface IESLiveIMTracker : NSObject
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logWith:detail:;
- (void)logWith:text:;
- (void)trackWith:extra:;
- (void)addDelegate:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void)removeDelegate:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
