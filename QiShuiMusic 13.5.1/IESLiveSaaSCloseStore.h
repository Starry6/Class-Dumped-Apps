@interface IESLiveSaaSCloseStore : NSObject
@property (nonatomic) BOOL screenIESLiveSaaSLock;
@property (nonatomic) BOOL isPinching;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (void)isPinchGestureEnded;
- (void)isPinchGestureStarted;
- (BOOL)screenIESLiveSaaSLock;
- (void)setScreenIESLiveSaaSLock:;
- (void)unlockScreen;
- (id)init;
- (BOOL)isPinching;
- (void)setIsPinching:;
- (void)lockScreen;
@end
