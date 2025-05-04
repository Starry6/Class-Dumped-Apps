@interface AWEShareActivitySDKModel : AWEBaseApiModel
@property (nonatomic) NSString channel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString url;
@property (nonatomic) NSString imageURL;
@property (nonatomic) Q shareType;
- (void)setUrl:;
- (id)channel;
- (void)setChannel:;
- (void)setDesc:;
- (id)desc;
- (id)imageURL;
- (void).cxx_destruct;
- (id)title;
- (void)setImageURL:;
- (id)url;
- (void)setTitle:;
- (void)setShareType:;
- (unsigned long long)shareType;
+ (id)JSONKeyPathsByPropertyKey;
@end
