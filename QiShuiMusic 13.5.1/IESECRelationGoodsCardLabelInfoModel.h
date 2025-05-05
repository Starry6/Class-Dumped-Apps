@interface IESECRelationGoodsCardLabelInfoModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString label;
@property (nonatomic) IESECRelationGoodsCardCoverImageInfoModel imageInfo;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString uiElementID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUiElementID:;
- (id)uiElementID;
- (id)schema;
- (void)setType:;
- (void)setLabel:;
- (id)label;
- (void)setSchema:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)imageInfo;
- (void)setImageInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
