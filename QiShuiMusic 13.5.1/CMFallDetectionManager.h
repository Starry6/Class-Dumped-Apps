@interface CMFallDetectionManager : NSObject
@property (nonatomic) q authorizationStatus;
@property (nonatomic) <CMFallDetectionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (long long)authorizationStatus;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)fallDetectionManagerInternalDidUpdateEnablementState:;
- (void)fallDetectionManagerInternal:didUpdateFallEvent:;
- (void)fallDetectionManagerInternalDidStartBackgroundSession:;
- (void)requestAuthorizationWithHandler:;
- (void)_updateDelegateWithFallEvent:;
+ (BOOL)isAvailable;
@end
