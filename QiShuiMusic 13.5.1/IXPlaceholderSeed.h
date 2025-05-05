@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed
@property (nonatomic) NSString bundleName;
@property (nonatomic) NSString bundleID;
@property (nonatomic) Q installType;
@property (nonatomic) BOOL isAppExtension;
@property (nonatomic) Q placeholderType;
- (unsigned long long)installType;
- (BOOL)isAppExtension;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setBundleName:;
- (void).cxx_destruct;
- (id)bundleID;
- (id)bundleName;
- (id)copyWithZone:;
- (void)setBundleID:;
- (void)setInstallType:;
- (Class)clientPromiseClass;
- (unsigned long long)placeholderType;
- (void)setPlaceholderType:;
+ (BOOL)supportsSecureCoding;
@end
