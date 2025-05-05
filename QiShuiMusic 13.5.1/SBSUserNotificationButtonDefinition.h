@interface SBSUserNotificationButtonDefinition : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger presentationStyle;
@property (nonatomic) BOOL isPreferredButton;
- (id)_initWithDictionary:;
- (id)init;
- (int)presentationStyle;
- (id)initWithTitle:;
- (unsigned long long)hash;
- (id)build;
- (id)title;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)_copyPropertiesToDefinition:;
- (BOOL)isPreferredButton;
+ (id)_buttonDefinitionsFromSerializedDefinitions:;
@end
