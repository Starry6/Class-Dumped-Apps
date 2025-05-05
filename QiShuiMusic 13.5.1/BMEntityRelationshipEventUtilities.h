@interface BMEntityRelationshipEventUtilities : NSObject
+ (BOOL)checkNullableStringEqualityForSource:target:;
+ (BOOL)checkNullableArrayEqualityForSource:target:;
+ (BOOL)checkNullableDictionaryEqualityForSource:target:;
+ (BOOL)checkNullablePersonEntityEqualityForSource:target:;
+ (BOOL)checkNullableTopicEntityEqualityForSource:target:;
@end
