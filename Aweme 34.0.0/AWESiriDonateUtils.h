@interface AWESiriDonateUtils : NSObject
+ (id)jsonStringToDictionary:;
+ (void)downloadImageWithURLString:completion:;
+ (unsigned long long)getDonateIntentType:;
+ (id)convertToIntentsModelUsingAweme:scene:;
+ (id)convertToIntentsModelUsingPushConfig:scene:;
+ (id)handleDonationForAwemeModel:nextModel:;
+ (id)convertToSiriIntentsModel:pushConfig:scene:;
+ (void)getDonateAWEAwemeModel:;
+ (id)trimHashText:;
+ (id)sharedInstance;
@end
