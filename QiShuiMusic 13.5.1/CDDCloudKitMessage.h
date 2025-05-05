@interface CDDCloudKitMessage : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
