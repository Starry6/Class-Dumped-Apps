@interface ASDManagedRequestStatus : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSUUID requestIdentifier;
@property (nonatomic) q state;
@property (nonatomic) NSString title;
- (void)setBundleVersion:;
- (id)requestIdentifier;
- (id)bundleVersion;
- (id)bundleIdentifier;
- (void)setState:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void)setRequestIdentifier:;
- (id)title;
- (long long)state;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
