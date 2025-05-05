@interface BDARVPlayerURLService : NSObject
+ (id)MD5HashString:;
+ (void)setDomainBlock:;
+ (id)baseToutiaoPlayApi;
+ (long long)currentTs;
+ (id)leTVSecretKey;
+ (id)leTVSignFromVideoID:ts:;
+ (id)leTVUserKey;
+ (id)mappedUrl:;
+ (void)saveLeTVSecretKey:;
+ (void)saveLeTVUserKey:;
+ (void)saveToutiaoSecretKey:;
+ (void)saveToutiaoUserKey:;
+ (id)toutiaoAuthPlayApi;
+ (id)toutiaoPlayApi;
+ (id)toutiaoPlayApiVersion;
+ (id)toutiaoSecretKey;
+ (id)toutiaoUserKey;
+ (id)urlWithVideoID:categoryID:itemId:adID:authToken:base:businessToken:;
+ (id)videoPlayPathBaseURL;
+ (id)urlMapping;
+ (id)baseURL;
+ (id)videoType;
@end
