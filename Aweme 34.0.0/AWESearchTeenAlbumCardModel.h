@interface AWESearchTeenAlbumCardModel : AWEBaseApiModel
@property (nonatomic) AWESearchTeenAlbumDisplayCardModel albumInfo;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString kyItemID;
@property (nonatomic) NSString sourceType;
@property (nonatomic) NSString tip;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)albumInfo;
- (void)setAlbumInfo:;
- (void)setKyItemID:;
- (id)kyItemID;
- (void)setSourceType:;
- (id)sourceType;
- (void).cxx_destruct;
- (id)tip;
- (void)setTip:;
+ (id)albumInfoJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
