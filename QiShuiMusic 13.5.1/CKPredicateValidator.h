@interface CKPredicateValidator : NSObject
- (BOOL)validate:error:;
+ (id)allocWithZone:;
+ (id)sharedValidator;
@end
