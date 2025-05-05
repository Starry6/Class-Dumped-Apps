@interface CalStructuredDataArchiver : NSObject
+ (id)defaultPermittedClasses;
+ (id)unarchiveDictionaryFromData:error:;
+ (id)unarchiveDictionaryFromData:permittedClasses:error:;
+ (id)unarchiveDictionaryFromData:permittedClasses:strict:error:;
+ (id)archiveDictionary:error:;
+ (id)archiveDictionary:permittedClasses:error:;
+ (id)archiveDictionary:permittedClasses:strict:error:;
@end
