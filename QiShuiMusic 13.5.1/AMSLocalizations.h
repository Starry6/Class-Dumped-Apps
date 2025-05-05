@interface AMSLocalizations : NSObject
+ (id)localizedStringPromiseForKey:bundle:table:bag:;
+ (id)localizedStringForKey:bundle:table:bag:;
+ (id)localizedStringForKey:bundle:table:languageCode:;
+ (id)localizedStringPromiseForKey:bundle:table:languageCode:;
@end
