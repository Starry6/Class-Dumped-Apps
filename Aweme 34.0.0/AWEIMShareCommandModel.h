@interface AWEIMShareCommandModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString pasteDescription;
@property (nonatomic) NSString qrText;
@property (nonatomic) q shareChannel;
@property (nonatomic) NSString token;
@property (nonatomic) NSString shareUrl;
- (void)setShareUrl:;
- (id)shareUrl;
- (long long)shareChannel;
- (void)setShareChannel:;
- (id)pasteDescription;
- (void)setPasteDescription:;
- (void)setQrText:;
- (id)qrText;
- (void).cxx_destruct;
- (id)title;
- (void)setToken:;
- (id)token;
- (void)setTitle:;
- (id)initWithDictionary:;
+ (id)JSONKeyPathsByPropertyKey;
@end
