@interface EDClientResumer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)signpostID;
- (void)dealloc;
- (void)contentProtectionStateChanged:previousState:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)persistenceDidReconcileProtectedData;
- (void)resumeForUpdates;
- (id)initWithClientBundleIdentifier:hookRegistry:clientState:;
+ (id)log;
+ (id)signpostLog;
@end
