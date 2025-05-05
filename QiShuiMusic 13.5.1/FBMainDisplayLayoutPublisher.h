@interface FBMainDisplayLayoutPublisher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q interfaceOrientation;
@property (nonatomic) q backlightLevel;
@property (nonatomic) BOOL transitioning;
@property (nonatomic) FBSDisplayLayout currentLayout;
- (id)addElement:;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (long long)interfaceOrientation;
- (long long)backlightLevel;
- (BOOL)isTransitioning;
- (id)currentLayout;
- (void)setInterfaceOrientation:;
- (void)setBacklightLevel:;
- (id)_addElement:forKey:;
- (void)flush;
- (void)displayMonitor:didUpdateIdentity:withConfiguration:;
- (void)publisher:didUpdateLayout:withTransition:;
- (id)transitionAssertionWithReason:;
- (void).cxx_destruct;
- (id)_initWithPublisher:;
+ (id)sharedInstance;
@end
