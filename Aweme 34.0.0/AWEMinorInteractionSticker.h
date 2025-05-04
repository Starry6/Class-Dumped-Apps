@interface AWEMinorInteractionSticker : MTLModel
@property (nonatomic) Q stickerType;
@property (nonatomic) NSString trackInfo;
@property (nonatomic) AWEMinorCreationSticker creationSticker;
@property (nonatomic) NSDictionary trackInfoDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStickerType:;
- (id)trackInfoDic;
- (void)setTrackInfoDic:;
- (id)creationSticker;
- (void)setCreationSticker:;
- (void).cxx_destruct;
- (void)setTrackInfo:;
- (id)trackInfo;
- (unsigned long long)stickerType;
+ (id)creationStickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
