@interface ISBundleIdentifierIcon : ISConcreteIcon
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)makeResourceProvider;
- (id)_makeResourceProviderAllowIconResourceFallback:;
- (double)_aspectRatio;
- (id)makeSymbolResourceProvider;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
