@interface CNExternalRepresentationDescription : CNPropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeUsingCoder:contact:;
- (Class)valueClass;
- (BOOL)abPropertyID:;
- (void)setCNValue:onContact:;
- (BOOL)isEqualForContact:other:;
- (id)init;
- (void)resetGuardianManagedValueOnContact:;
- (unsigned int)abPropertyType;
- (id)CNValueForContact:;
- (void)decodeUsingCoder:contact:;
- (id)CNValueFromABBytes:length:;
@end
