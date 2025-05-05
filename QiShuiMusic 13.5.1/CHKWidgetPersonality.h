@interface CHKWidgetPersonality : NSObject
@property (nonatomic) NSString extensionBundleIdentifier;
@property (nonatomic) NSString kind;
@property (nonatomic) q hash;
@property (nonatomic) NSString description;
- (id)init;
- (BOOL)matchesPersonality:;
- (id)extensionBundleIdentifier;
- (id)kind;
- (id)initWithCoder:;
- (long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
