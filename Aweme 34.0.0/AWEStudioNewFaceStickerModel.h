@interface AWEStudioNewFaceStickerModel : AWEStickerDetailModel
@property (nonatomic) AWECommerceStickerDetailModel commerceStickerModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString effectID;
@property (nonatomic) BOOL isFavorited;
@property (nonatomic) NSArray childrenStickersIDs;
- (void)setEffectID:;
- (void)setIsFavorited:;
- (id)childrenStickersIDs;
- (void)setChildrenStickersIDs:;
- (void).cxx_destruct;
- (id)effectID;
- (BOOL)isFavorited;
+ (id)JSONKeyPathsByPropertyKey;
@end
