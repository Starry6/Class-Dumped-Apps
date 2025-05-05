@interface UNNotificationIcon : NSObject
- (id)applicationIdentifier;
- (id)path;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)systemImageName;
- (void)encodeWithCoder:;
- (id)_initWithIconInfo:type:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)iconAtPath:;
+ (id)iconForApplicationIdentifier:;
+ (id)iconForSystemImageNamed:;
+ (id)iconNamed:;
@end
