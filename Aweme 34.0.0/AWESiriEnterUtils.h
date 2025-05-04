@interface AWESiriEnterUtils : NSObject
+ (BOOL)isSiriSuggestEnter:;
+ (id)getUrlStringForSiriSuggest:;
+ (id)reportSiriClick:urlString:;
+ (id)getIntentModel:;
@end
