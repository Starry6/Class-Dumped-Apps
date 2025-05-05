@interface BDXBridgeGeckoEventManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)gurdDidFinishApplyingPackageForAccessKey:channel:succeed:error:;
- (void)sendGeckoUpdatedWithEventChannel:version:;
+ (void)endNotifier;
+ (id)sharedManager;
+ (void)startNotifier;
@end
