@interface IESLiveVideoURLService : NSObject
+ (id)MD5HashString:;
+ (id)urlWithVideoId:;
+ (long long)currentTs;
+ (void)saveToutiaoVideoSecretKey:;
+ (void)saveToutiaoVideoUserKey:;
+ (id)signFromVideoID:ts:;
+ (id)toutiaoVideoAPIURL;
+ (id)toutiaoVideoAPIVersion;
+ (id)toutiaoVideoSecretKey;
+ (id)toutiaoVideoUser;
+ (id)urlForV1WithVideoId:;
+ (id)urlForV1WithVideoId:businessToken:;
+ (id)videoAPIURL;
+ (id)baseURL;
@end
