@interface DNDAppInfo : NSObject
@property (nonatomic) q source;
@property (nonatomic) DNDApplicationIdentifier applicationIdentifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSURL storeIconURL;
@property (nonatomic) NSURL cachedIconURL;
- (id)applicationIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)source;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSource:applicationIdentifier:displayName:storeIconURL:cachedIconURL:;
- (id)_initWithAppInfo:;
- (id)storeIconURL;
- (id)cachedIconURL;
+ (BOOL)supportsSecureCoding;
@end
