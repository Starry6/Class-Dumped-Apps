@interface DCDocumentCameraViewServiceSessionRequest : NSObject
@property (nonatomic) NSString appName;
@property (nonatomic) DCSandboxExtension cachesDirectorySandboxExtension;
- (id)init;
- (id)initWithCoder:;
- (id)appName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)cachesDirectorySandboxExtension;
+ (BOOL)supportsSecureCoding;
@end
