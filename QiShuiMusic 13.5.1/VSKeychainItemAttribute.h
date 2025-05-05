@interface VSKeychainItemAttribute : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q attributeType;
@property (nonatomic) NSString attributeValueClassName;
@property (nonatomic) r^{__CFString=} secItemAttributeKey;
@property (nonatomic) @ defaultValue;
- (void)dealloc;
- (void)setName:;
- (void)setAttributeType:;
- (void)setAttributeValueClassName:;
- (void)setDefaultValue:;
- (id)defaultValue;
- (id)attributeValueClassName;
- (void).cxx_destruct;
- (unsigned long long)attributeType;
- (id)name;
- (id)copyWithZone:;
- (void)setSecItemAttributeKey:;
- (id)secItemAttributeKey;
@end
