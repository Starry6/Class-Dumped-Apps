@interface DNDMutableAppInfo : DNDAppInfo
@property (nonatomic) q source;
@property (nonatomic) DNDApplicationIdentifier applicationIdentifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSURL storeIconURL;
@property (nonatomic) NSURL cachedIconURL;
- (void)setApplicationIdentifier:;
- (void)setDisplayName:;
- (void)setSource:;
- (id)copyWithZone:;
- (void)setStoreIconURL:;
- (void)setCachedIconURL:;
@end
