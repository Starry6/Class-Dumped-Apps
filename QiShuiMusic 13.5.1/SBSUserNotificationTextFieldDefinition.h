@interface SBSUserNotificationTextFieldDefinition : NSObject
@property (nonatomic) BOOL _hasSetMaxLength;
@property (nonatomic) NSString title;
@property (nonatomic) NSString value;
@property (nonatomic) BOOL secure;
@property (nonatomic) Q maxLength;
@property (nonatomic) q keyboardType;
@property (nonatomic) q autocapitalizationType;
@property (nonatomic) q autocorrectionType;
- (BOOL)isSecure;
- (id)_initWithDictionary:;
- (id)init;
- (long long)keyboardType;
- (unsigned long long)maxLength;
- (unsigned long long)hash;
- (id)build;
- (long long)autocapitalizationType;
- (id)title;
- (void).cxx_destruct;
- (id)value;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (long long)autocorrectionType;
- (id)copyWithZone:;
- (void)_copyPropertiesToDefinition:;
- (BOOL)_hasSetMaxLength;
+ (id)_definitionsFromSerializedDefinitions:;
@end
