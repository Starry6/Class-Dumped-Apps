@interface AWEOFGAuthInfo : NSObject
@property (nonatomic) NSString clientKey;
@property (nonatomic) NSString pageUrl;
@property (nonatomic) NSString url;
@property (nonatomic) NSString signature;
@property (nonatomic) NSString timestamp;
@property (nonatomic) NSString nonceStr;
- (id)nonceStr;
- (void)setNonceStr:;
- (id)signature;
- (id)timestamp;
- (void)setSignature:;
- (id)clientKey;
- (void)setUrl:;
- (id)pageUrl;
- (void)setTimestamp:;
- (void)setClientKey:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setPageUrl:;
- (id)url;
+ (id)modelPropertyBlacklist;
+ (id)modelCustomPropertyMapper;
@end
