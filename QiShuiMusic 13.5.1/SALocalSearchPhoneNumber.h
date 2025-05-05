@interface SALocalSearchPhoneNumber : AceObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setType:;
- (void)setValue:;
- (id)type;
- (id)encodedClassName;
- (id)value;
+ (id)phoneNumber;
+ (id)phoneNumberWithDictionary:context:;
@end
