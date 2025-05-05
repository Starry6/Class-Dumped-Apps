@interface CSJTemplateResourceModel : NSObject
@property (nonatomic) NSString md5;
@property (nonatomic) NSString localUrl;
@property (nonatomic) NSString url;
@property (nonatomic) q level;
- (id)csj_dictionaryValue;
- (id)initWithDicitonary:;
- (id)localUrl;
- (void)setLocalUrl:;
- (void)setLevel:;
- (id)url;
- (id)init;
- (long long)level;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)md5;
- (void)setMd5:;
@end
