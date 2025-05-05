@interface CSJTemplateResourceArchiveModel : NSObject
@property (nonatomic) NSString md5;
@property (nonatomic) NSString localUrl;
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary map;
- (id)csj_dictionaryValue;
- (id)initWithDicitonary:;
- (id)localUrl;
- (void)setLocalUrl:;
- (id)url;
- (id)init;
- (BOOL)valid;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)map;
- (void)setMap:;
- (id)md5;
- (void)setMd5:;
@end
