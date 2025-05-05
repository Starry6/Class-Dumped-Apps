@interface CDDCloudKitServerConfiguration : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
