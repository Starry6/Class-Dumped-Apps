@interface SADialogConfiguration : SABaseAceObject
@property (nonatomic) <SAAceSerializable> context;
@property (nonatomic) NSString gender;
@property (nonatomic) NSString languageCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setLanguageCode:;
- (id)gender;
- (id)languageCode;
- (id)context;
- (void)setGender:;
- (id)encodedClassName;
- (void)setContext:;
@end
