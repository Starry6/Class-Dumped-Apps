@interface CNIOSLegacyIdentifierDescription : CNPropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)nilValue;
- (void)encodeUsingCoder:contact:;
- (Class)valueClass;
- (void)setCNValue:onContact:;
- (BOOL)isEqualForContact:other:;
- (id)init;
- (void)resetGuardianManagedValueOnContact:;
- (id)ABValueForABPerson:;
- (BOOL)setABValue:onABPerson:error:;
- (BOOL)isEqualIgnoringIdentifiersForContact:other:;
- (id)CNValueForContact:;
- (void)decodeUsingCoder:contact:;
- (id)nilValue;
- (id)valueWithResetIdentifiers:;
@end
