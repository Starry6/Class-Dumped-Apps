@interface AWEModernFullScreenTransManager : NSObject
@property (nonatomic) BOOL isTransition;
@property (nonatomic) NSObject<OS_dispatch_queue> executeQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)executeQueue;
- (void)setExecuteQueue:;
- (void)updateTransitionStatus:;
- (void)setIsTransition:;
- (void)updateTransitionStatus:delay:;
- (BOOL)isTransitioning;
- (void).cxx_destruct;
- (BOOL)isTransition;
+ (long long)getHorizontalFitContentModeWithEndViewSize:imageSize:;
+ (id)sharedManager;
@end
