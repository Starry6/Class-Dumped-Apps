@interface CDDCloudKitScheduleActivityMessage : CDDCloudKitMessage
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
