@interface CNVCardUserDefaults : NSObject
+ (unsigned long long)outputFormat;
+ (BOOL)includeUserSettings;
+ (id)vCard21Encoding;
+ (BOOL)includeNotesInVCards;
+ (BOOL)boolForKey:;
+ (id)vCardPrivateFields;
+ (long long)defaultNameOrdering;
+ (id)objectForKey:;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (BOOL)debugLogEnabled;
+ (BOOL)includePhotosInVCards;
+ (long long)integerForKey:;
@end
