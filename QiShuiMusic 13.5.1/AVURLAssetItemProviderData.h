@interface AVURLAssetItemProviderData : NSObject
@property (nonatomic) NSURL securityScopedURL;
@property (nonatomic) NSDictionary assetInitializationOptions;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithURL:assetInitializationOptions:;
- (id)securityScopedURL;
- (id)assetInitializationOptions;
+ (BOOL)supportsSecureCoding;
+ (id)itemProviderDataWithURL:assetInitializationOptions:;
@end
