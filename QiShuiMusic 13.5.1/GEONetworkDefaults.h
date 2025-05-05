@interface GEONetworkDefaults : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)valueForKey:;
- (id)init;
- (void)updateIfNecessary:;
- (void)serverProxy:networkDefaultsDidChange:;
- (id)allKeys;
- (void)updateNetworkDefaults:;
- (void)updateNetworkDefaultsWithReason:completionHandler:;
- (void).cxx_destruct;
- (void)allKeysAndValues:;
+ (BOOL)useLocalProxy;
+ (void)setUseLocalProxy:;
+ (id)sharedNetworkDefaults;
@end
