@interface WBSTemplateIconRequest : WBSSiteMetadataRequest
@property (nonatomic) NSString monogramTitle;
@property (nonatomic) WBSTemplateIconMonogramConfiguration monogramConfiguration;
@property (nonatomic) UIColor overrideForegroundColor;
@property (nonatomic) BOOL saveToDisk;
- (BOOL)saveToDisk;
- (id)initWithURL:extraInfo:;
- (id)monogramTitle;
- (id)initWithURL:title:monogramConfiguration:overrideForegroundColor:saveToDisk:;
- (id)monogramConfiguration;
- (id)overrideForegroundColor;
@end
