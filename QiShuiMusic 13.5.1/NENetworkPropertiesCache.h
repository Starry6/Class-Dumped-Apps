@interface NENetworkPropertiesCache : NSObject
@property (nonatomic) NSURL cacheFileURL;
@property (nonatomic) NSString keychainIdentifier;
- (id)init;
- (id)keychainIdentifier;
- (void)setCacheFileURL:;
- (void)rotateEncryptionKey;
- (id)copyPropertiesForNetworkPath:;
- (void)setProperties:forNetworkPath:;
- (void)clear;
- (void)setKeychainIdentifier:;
- (void).cxx_destruct;
- (id)cacheFileURL;
+ (id)sharedCache;
@end
