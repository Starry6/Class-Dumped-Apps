@interface UIOServer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)listener:didReceiveConnection:withContext:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)registerDisplayDelegate:forIdentifier:;
- (void)unregisterDisplayDelegateForIdentifier:;
- (id)displayDelegateForIdentifier:;
- (id)displayDelegateForAction:;
- (id)displayDelegateForAction:sceneType:;
+ (id)sharedInstance;
+ (id)_identifierForSceneType:displayHardwareIdentifier:;
+ (id)displayDelegateIdentifierForScene:;
@end
