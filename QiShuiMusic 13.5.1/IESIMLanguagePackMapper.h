@interface IESIMLanguagePackMapper : NSObject
- (id)valueForKey:;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)extractStringArrayFromBuffer:length:;
+ (id)languageMapperFromFile:locale:;
@end
