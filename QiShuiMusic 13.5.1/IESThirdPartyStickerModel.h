@interface IESThirdPartyStickerModel : MTLModel
@property (nonatomic) NSString filePath;
@property (nonatomic) BOOL downloaded;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString userName;
@property (nonatomic) IESThirdPartyStickerInfoModel thumbnailSticker;
@property (nonatomic) IESThirdPartyStickerInfoModel sticker;
@property (nonatomic) NSString clickURL;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clickURL;
- (id)thumbnailSticker;
- (id)filePath;
- (id)extra;
- (id)userName;
- (id)identifier;
- (id)title;
- (void).cxx_destruct;
- (BOOL)downloaded;
- (id)sticker;
+ (id)JSONKeyPathsByPropertyKey;
@end
