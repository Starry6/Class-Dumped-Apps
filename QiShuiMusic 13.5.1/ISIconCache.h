@interface ISIconCache : NSObject
@property (nonatomic) Q sandboxToken;
@property (nonatomic) ISStoreIndex storeIndex;
@property (nonatomic) ISStore store;
@property (nonatomic) NSString cachePath;
@property (nonatomic) NSURL cacheURL;
- (unsigned long long)sandboxToken;
- (id)cachePath;
- (void)dealloc;
- (id)storeIndex;
- (void)clear;
- (id)initWithURL:storeIndex:sandboxExtensionToken:;
- (void).cxx_destruct;
- (BOOL)findStoreUnitForIcon:descriptor:UUID:validationToken:;
- (id)description;
- (id)store;
- (id)initWithConfiguration:;
- (id)cacheURL;
- (id)storeUnitForUUID:;
+ (id)defaultIconCache;
@end
