@interface ICStoreDialogResponse : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString explanation;
@property (nonatomic) BOOL initialCheckboxValue;
@property (nonatomic) BOOL biometricAuthenticationAllowed;
@property (nonatomic) NSString message;
@property (nonatomic) NSArray buttons;
@property (nonatomic) q defaultButtonType;
@property (nonatomic) NSDictionary responseDictionary;
- (id)explanation;
- (id)responseDictionary;
- (id)initWithResponseDictionary:;
- (id)buttons;
- (id)debugDescription;
- (long long)type;
- (id)message;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)isInitialCheckboxValue;
- (BOOL)isBiometricAuthenticationAllowed;
- (long long)defaultButtonType;
- (id)_buttonWithType:;
- (id)_buttonTitleKeyForType:;
- (id)_buttonActionKeyForType:;
@end
