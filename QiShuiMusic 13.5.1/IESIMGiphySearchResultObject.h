@interface IESIMGiphySearchResultObject : MTLModel
@property (nonatomic) IESIMURLModel originURL;
@property (nonatomic) IESIMURLModel thumbnailURL;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q stickerType;
@property (nonatomic) NSNumber imageID;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStickerType:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)thumbnailURL;
- (void)setThumbnailURL:;
- (id)originURL;
- (void)setOriginURL:;
- (id)imageID;
- (void)setImageID:;
- (unsigned long long)stickerType;
+ (id)originURLJSONTransformer;
+ (id)thumbnailURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
