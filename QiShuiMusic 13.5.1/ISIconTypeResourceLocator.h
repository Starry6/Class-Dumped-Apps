@interface ISIconTypeResourceLocator : ISIconResourceLocator
@property (nonatomic) NSString type;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (id)preferedResourceName;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)initWithType:;
- (BOOL)allowLocalizedIcon;
- (id)resourceDirectoryURL;
+ (BOOL)supportsSecureCoding;
@end
