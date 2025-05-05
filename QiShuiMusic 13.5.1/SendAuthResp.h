@interface SendAuthResp : BaseResp
@property (nonatomic) NSString code;
@property (nonatomic) NSString state;
@property (nonatomic) NSString lang;
@property (nonatomic) NSString country;
- (id)country;
- (void)setState:;
- (id)code;
- (void)setCountry:;
- (id)state;
- (void).cxx_destruct;
- (void)setCode:;
- (id)lang;
- (void)setLang:;
@end
