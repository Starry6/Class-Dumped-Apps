@interface WXWebpageObject : NSObject
@property (nonatomic) NSString webpageUrl;
@property (nonatomic) BOOL isSecretMessage;
@property (nonatomic) NSDictionary extraInfoDic;
- (BOOL)isSecretMessage;
- (id)extraInfoDic;
- (void)setExtraInfoDic:;
- (void)setIsSecretMessage:;
- (void)setWebpageUrl:;
- (id)webpageUrl;
- (void).cxx_destruct;
+ (id)object;
@end
