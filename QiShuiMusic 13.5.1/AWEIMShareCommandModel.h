@interface AWEIMShareCommandModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString pasteDescription;
@property (nonatomic) NSString qrText;
@property (nonatomic) q shareChannel;
@property (nonatomic) NSString token;
@property (nonatomic) NSString shareUrl;
- (id)pasteDescription;
- (id)qrText;
- (void)setPasteDescription:;
- (void)setQrText:;
- (void)setShareChannel:;
- (void)setShareUrl:;
- (long long)shareChannel;
- (id)shareUrl;
- (id)token;
- (id)initWithDictionary:;
- (void)setTitle:;
- (void)setToken:;
- (id)title;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
