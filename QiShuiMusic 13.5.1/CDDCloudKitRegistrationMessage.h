@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
