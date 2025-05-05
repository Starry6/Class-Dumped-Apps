@interface ICSRelationshipTypeParameter : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)relationshipParameterFromCode:;
+ (id)relationshipTypeParameterFromICSString:;
@end
