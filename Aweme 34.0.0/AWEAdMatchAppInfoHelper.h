@interface AWEAdMatchAppInfoHelper : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)sendRequestWithParams:retry:fromCache:;
+ (id)adIDFromParams:;
+ (id)advIDFromParams:;
+ (void)uploadMatchAppInfo:adInfo:;
+ (void)uploadCachedInfo;
+ (id)phoneNumber;
+ (id)ipAddress;
@end
