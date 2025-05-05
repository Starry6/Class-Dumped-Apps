@interface ABUAdLoadInfo : NSObject
@property (nonatomic) NSDictionary dict;
@property (nonatomic) NSString mediationRit;
@property (nonatomic) NSString adnName;
@property (nonatomic) NSString customAdnName;
@property (nonatomic) q errCode;
@property (nonatomic) NSString errMsg;
- (id)adnName;
- (long long)errCode;
- (id)customAdnName;
- (id)errMsg;
- (id)mediationRit;
- (id)init;
- (BOOL)isMemberOfClass:;
- (id)initWithDict:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)dict;
- (id)description;
- (void)setDict:;
@end
