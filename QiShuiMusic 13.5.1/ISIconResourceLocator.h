@interface ISIconResourceLocator : NSObject
@property (nonatomic) NSURL resourceDirectoryURL;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSDictionary iconsDictionary;
@property (nonatomic) NSString preferedResourceName;
@property (nonatomic) BOOL allowLocalizedIcon;
- (id)bundleIdentifier;
- (void)setPreferedResourceName:;
- (id)initWithCoder:;
- (id)preferedResourceName;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)iconsDictionary;
- (BOOL)allowLocalizedIcon;
- (id)resourceDirectoryURL;
- (void)setResourceDirectoryURL:;
- (void)setIconsDictionary:;
+ (BOOL)supportsSecureCoding;
+ (id)resourceLocatorWithLSIconResourceLocator:;
+ (id)resourceLocatorWithType:;
+ (id)genericIconrResourceLocator;
@end
