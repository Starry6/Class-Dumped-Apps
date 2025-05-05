@interface VSLocalizedString : NSObject
+ (id)localizedStringForKey:language:table:;
+ (id)predefinedStringForKey:language:table:;
+ (id)appendRandomizationKey:withCount:;
+ (id)localizedInterstitialStringForKey:language:;
+ (id)localizedOOBStringForKey:language:;
+ (id)localizedOOBStringForKey:language:gender:;
@end
