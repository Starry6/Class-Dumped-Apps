@interface BDMannorAppStore : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadWithAppID:creativeID:logExtra:downloadURL:SKANParams:downloadScene:webURL:complianceData:completion:;
- (void)processWithAppID:preload:creativeID:logExtra:downloadURL:appStoreEnabled:SKANParams:downloadScene:webURL:complianceData:;
@end
