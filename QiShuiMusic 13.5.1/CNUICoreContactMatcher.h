@interface CNUICoreContactMatcher : NSObject
+ (id)nameFromFammilyMember:;
+ (BOOL)doesContact:matchContact:;
+ (BOOL)doesNameOfContact:matchNameOfContact:;
+ (BOOL)doesContact:matchAnyParentOrGuardianInFamily:;
+ (BOOL)doesNameOfContact:matchNameOfFamilyMember:;
@end
