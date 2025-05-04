@interface AWECampaignUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)isADs:;
+ (id)storageKeyForCurrentUserWithKey:;
+ (unsigned long long)compareTime:inTimeRange:;
+ (id)pathForResource:ofType:outbundle:withRemoteResBundle:;
+ (void)downloadLottieFileUrlString:md5:creatCacheCompletion:withCompletion:;
+ (id)lottieNamed:withBundle:;
@end
