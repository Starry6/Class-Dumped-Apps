@interface LPiTunesStoreInformation : NSObject
@property (nonatomic) Q capabilities;
@property (nonatomic) NSString storefrontIdentifier;
- (id)init;
- (unsigned long long)capabilities;
- (void).cxx_destruct;
- (id)storefrontIdentifier;
- (void)_setCapabilities:;
- (void)_storefrontDidChangeNotification;
- (void)_capabilitiesDidChangeNotification;
- (unsigned long long)userStateForMediaStorefrontIdentifier:;
- (void)_setStorefrontIdentifier:;
- (void)_notifyChangeHandlers;
- (void)registerForStoreAvailablityChangesWithToken:handler:;
- (void)unregisterForStoreAvailablityChangesWithToken:;
+ (id)shared;
+ (unsigned long long)_convertCapabilities:;
+ (id)_convertNewStorefrontIdentifier:;
@end
