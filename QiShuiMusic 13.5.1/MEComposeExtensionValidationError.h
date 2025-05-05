@interface MEComposeExtensionValidationError : NSObject
@property (nonatomic) UIImage icon;
@property (nonatomic) NSString extensionDisplayName;
@property (nonatomic) NSError error;
- (void)setError:;
- (id)icon;
- (id)error;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)extensionDisplayName;
- (id)initWithExtensionName:icon:error:;
- (void)setExtensionDisplayName:;
@end
