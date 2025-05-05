@interface EDVIPManagerProxy : NSObject
@property (nonatomic) EDVIPManager vipManager;
@property (nonatomic) NSSet allVIPWaitForResult;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)vipManager;
- (void)removeVIPsWithEmailAddresses:;
- (void).cxx_destruct;
- (void)_vipsDidChange:;
- (id)allVIPWaitForResult;
- (void)saveVIPs:;
- (void)removeVIPsWithIdentifiers:;
- (void)cancelObservation:;
- (void)registerObserver:observationIdentifier:;
- (id)initWithVIPManager:;
@end
