@interface SBSUserNotificationSystemImageDefinition : SBSUserNotificationImageDefinition
@property (nonatomic) NSString systemImageName;
@property (nonatomic) SBSUserNotificationColorDefinition tintColor;
- (id)_initWithDictionary:;
- (id)initWithSystemImageName:tintColor:;
- (id)tintColor;
- (id)build;
- (id)systemImageName;
- (void).cxx_destruct;
- (id)initWithSystemImageName:;
- (id)_initWithSystemImageName:tintColor:;
+ (id)_definitionType;
@end
