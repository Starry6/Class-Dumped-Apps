@interface CNCalendarURIsDescription : CNMultiValuePropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeUsingCoder:contact:;
- (void)setCNValue:onContact:;
- (BOOL)isEqualForContact:other:;
- (id)init;
- (id)ABValueForABPerson:;
- (BOOL)setABValue:onABPerson:error:;
- (id)CNValueForContact:;
- (id)CNValueFromABValue:;
- (void)decodeUsingCoder:contact:;
- (id)ABValueFromCNValue:;
@end
