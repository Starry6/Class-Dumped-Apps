@interface IESInfoStickerListResponseModel : MTLModel
@property (nonatomic) NSArray stickerList;
@property (nonatomic) NSArray collectionStickerList;
@property (nonatomic) NSArray categoryList;
@property (nonatomic) NSString version;
@property (nonatomic) NSString panelName;
@property (nonatomic) NSString frontInfoStickerID;
@property (nonatomic) NSString rearInfoStickerID;
@property (nonatomic) NSArray urlPrefix;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStickerList:;
- (id)collectionStickerList;
- (id)frontInfoStickerID;
- (void)preProcessEffects;
- (id)rearInfoStickerID;
- (void)setCollectionStickerList:;
- (id)stickerList;
- (id)version;
- (id)categoryList;
- (void)setCategoryList:;
- (void).cxx_destruct;
- (id)panelName;
- (id)urlPrefix;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
