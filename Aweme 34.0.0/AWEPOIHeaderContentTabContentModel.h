@interface AWEPOIHeaderContentTabContentModel : AWEBaseApiModel
@property (nonatomic) q itemType;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) NSArray photos;
@property (nonatomic) NSString subTabPageSymbol;
@property (nonatomic) NSString anchorTabId;
- (id)lynxUrl;
- (void)setLynxUrl:;
- (id)subTabPageSymbol;
- (id)anchorTabId;
- (void)setSubTabPageSymbol:;
- (void)setAnchorTabId:;
- (long long)itemType;
- (void)setItemType:;
- (void).cxx_destruct;
- (id)photos;
- (void)setPhotos:;
+ (id)photosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
