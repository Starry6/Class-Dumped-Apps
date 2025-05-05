@interface ShowMessageFromWXReq : BaseReq
@property (nonatomic) WXMediaMessage message;
@property (nonatomic) NSString lang;
@property (nonatomic) NSString country;
- (id)country;
- (void)setMessage:;
- (void)setCountry:;
- (id)message;
- (void).cxx_destruct;
- (id)lang;
- (void)setLang:;
@end
