@interface SFSafariViewControllerActivityButton : NSObject
@property (nonatomic) BOOL _fieldsAreValid;
@property (nonatomic) UIImage templateImage;
@property (nonatomic) NSString extensionIdentifier;
- (id)extensionIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithTemplateImage:extensionIdentifier:;
- (BOOL)_fieldsAreValid;
- (id)templateImage;
+ (BOOL)supportsSecureCoding;
@end
