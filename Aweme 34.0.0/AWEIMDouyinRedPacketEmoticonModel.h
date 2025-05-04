@interface AWEIMDouyinRedPacketEmoticonModel : AWEBaseApiModel
@property (nonatomic) NSString emoticonId;
@property (nonatomic) NSString url;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSString width;
@property (nonatomic) NSString height;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)emoticonId;
- (void)setEmoticonId:;
- (void)setUrl:;
- (void)setHeight:;
- (void)setWidth:;
- (id)width;
- (void).cxx_destruct;
- (id)height;
- (id)url;
+ (id)JSONKeyPathsByPropertyKey;
@end
