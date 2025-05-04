@interface AWELiveStickerUserModel : MTLModel
@property (nonatomic) NSNumber stickerUserId;
@property (nonatomic) AWELiveStickerAvatarListModel imageURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stickerUserId;
- (void)setStickerUserId:;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setImageURL:;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
