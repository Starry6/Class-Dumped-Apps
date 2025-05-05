@interface CNVCardWriting : NSObject
+ (id)dataWithPeople:options:error:;
+ (id)stringWithPeople:options:error:;
+ (id)stringWithPerson:options:error:;
+ (id)dataWithPerson:options:error:;
+ (id)excludedFieldsForPerson:options:;
+ (id)excludedMeCardFields;
+ (id)scopeForPerson:options:;
+ (void)serializePerson:withSerializer:options:;
+ (void)makevCardWithBuilder:serializer:options:;
@end
