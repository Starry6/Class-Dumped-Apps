@interface UNNotificationActionIcon : NSObject
@property (nonatomic) NSString imageName;
@property (nonatomic) BOOL systemIcon;
- (void)setSystemIcon:;
- (void)setImageName:;
- (id)imageName;
- (id)_description;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isSystemIcon;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithImageName:systemIcon:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)iconWithTemplateImageName:;
+ (id)iconWithSystemImageName:;
+ (id)_iconWithImageName:systemIcon:;
@end
