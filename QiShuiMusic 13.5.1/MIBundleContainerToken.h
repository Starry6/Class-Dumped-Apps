@interface MIBundleContainerToken : MIContainerToken
@property (nonatomic) BOOL hasIdentifiedBundle;
@property (nonatomic) NSURL bundleURL;
- (id)initWithContainer:;
- (id)bundleURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)hasIdentifiedBundle;
+ (BOOL)supportsSecureCoding;
@end
