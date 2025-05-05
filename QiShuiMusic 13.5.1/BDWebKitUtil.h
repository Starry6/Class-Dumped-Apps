@interface BDWebKitUtil : NSObject
+ (BOOL)_newCheckWebContentBlank:withBlankColor:;
+ (BOOL)_newCheckWebContentBlank:withBlankColor:withNonBlankRatio:;
+ (BOOL)_newCheckWebContentBlankTryFixCrash:withBlankColor:;
+ (BOOL)_oldCheckWebContentBlank:withBlankColor:;
+ (BOOL)_oldCheckWebContentBlankTryFixCrash:withBlankColor:;
+ (BOOL)checkWebContentBlank:withBlankColor:;
+ (BOOL)checkWebContentBlank:withBlankColor:withNonBlankRatio:;
+ (id)contentTypeOfExtension:;
+ (id)prefixMatchesInString:withPattern:;
+ (id)rangeDataForVideo:withRequest:withResponseHeaders:;
@end
