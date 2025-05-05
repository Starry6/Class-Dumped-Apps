@interface DESBundleRegistry : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)infoDictionaryForBundleID:;
- (id)allBundleIds;
- (id)allUnrestrictedBundleIds;
- (long long)pluginTypeForBundleId:;
- (void).cxx_destruct;
- (BOOL)containsBundleId:;
- (id)_init;
+ (id)sharedInstance;
+ (id)_extensionsWithEndpointName:;
@end
