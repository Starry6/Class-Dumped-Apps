@interface WFDialogAttribution : NSObject
@property (nonatomic) WFWorkflowIcon workflowIcon;
@property (nonatomic) NSString title;
@property (nonatomic) WFIcon icon;
- (id)icon;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithTitle:icon:;
- (id)initWithTitle:icon:workflowIcon:;
- (id)workflowIcon;
- (void)setWorkflowIcon:;
+ (BOOL)supportsSecureCoding;
+ (id)attributionWithTitle:icon:;
+ (id)attributionWithAppBundleIdentifier:;
@end
