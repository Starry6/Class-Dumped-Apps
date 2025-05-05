@interface MSOpenMailComposeViewControllerContext : NSObject
@property (nonatomic) NSDictionary compositionValues;
@property (nonatomic) NSArray attachments;
@property (nonatomic) NSString autosaveIdentifier;
@property (nonatomic) NSString hostApplicationBundleIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setAttachments:;
- (id)attachments;
- (id)autosaveIdentifier;
- (id)hostApplicationBundleIdentifier;
- (id)initWithAutosaveIdentifier:compositionValues:attachments:;
- (void)setCompositionValues:;
- (id)compositionValues;
- (void)setHostApplicationBundleIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)unarchiveFromData:error:;
@end
