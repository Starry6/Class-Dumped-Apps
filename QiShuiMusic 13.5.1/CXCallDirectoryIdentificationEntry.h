@interface CXCallDirectoryIdentificationEntry : NSObject
@property (nonatomic) NSString extensionIdentifier;
@property (nonatomic) NSString localizedExtensionName;
@property (nonatomic) NSString localizedExtensionContainingAppName;
@property (nonatomic) NSString localizedLabel;
- (void)setExtensionIdentifier:;
- (id)extensionIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLocalizedLabel:;
- (id)description;
- (id)localizedLabel;
- (id)localizedExtensionContainingAppName;
- (id)localizedExtensionName;
- (void)setLocalizedExtensionName:;
- (void)setLocalizedExtensionContainingAppName:;
+ (BOOL)supportsSecureCoding;
@end
