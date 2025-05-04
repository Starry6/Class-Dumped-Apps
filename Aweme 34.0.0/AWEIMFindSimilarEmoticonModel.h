@interface AWEIMFindSimilarEmoticonModel : MTLModel
@property (nonatomic) AWEIMStickerModel stickerModel;
@property (nonatomic) AWEIMEmojiAuthor authorModel;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stickerModel;
- (void)setStickerModel:;
- (id)authorModel;
- (void)setAuthorModel:;
- (void).cxx_destruct;
+ (id)similarStickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
