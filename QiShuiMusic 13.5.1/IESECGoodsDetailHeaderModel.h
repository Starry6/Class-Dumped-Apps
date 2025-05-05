@interface IESECGoodsDetailHeaderModel : IESECBaseApiModel
@property (nonatomic) NSArray pendants;
@property (nonatomic) NSArray cells;
@property (nonatomic) Q sizeType;
@property (nonatomic) IESECGoodsDetailHeaderPreViewMetaModel previewMeta;
@property (nonatomic) IESECGoodsDetailHeaderFooter footer;
@property (nonatomic) NSDictionary trackMeta;
@property (nonatomic) NSDictionary actionMeta;
- (void)setPreviewMeta:;
- (id)actionMeta;
- (id)pendants;
- (id)previewMeta;
- (void)setActionMeta:;
- (void)setPendants:;
- (void)setTrackMeta:;
- (id)trackMeta;
- (void)setFooter:;
- (void).cxx_destruct;
- (id)footer;
- (id)cells;
- (void)setCells:;
- (unsigned long long)sizeType;
- (void)setSizeType:;
+ (id)cellsJSONTransformer;
+ (id)pendantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
