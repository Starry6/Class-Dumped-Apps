@interface SBSSmartCoverService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)registerSmartCoverStateObserver:;
- (id)observeSmartCoverStateDidChange:;
+ (id)sharedInstance;
@end
