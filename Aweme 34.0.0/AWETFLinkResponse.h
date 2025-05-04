@interface AWETFLinkResponse : AWEBaseApiModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString msg;
@property (nonatomic) NSNumber errCode;
- (id)errCode;
- (void)setErrCode:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
- (void)setMsg:;
- (id)msg;
+ (id)JSONKeyPathsByPropertyKey;
@end
