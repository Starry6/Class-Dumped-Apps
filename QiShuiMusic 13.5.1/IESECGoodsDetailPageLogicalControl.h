@interface IESECGoodsDetailPageLogicalControl : MTLModel
@property (nonatomic) BOOL gulEnabled;
@property (nonatomic) BOOL detailControl;
@property (nonatomic) BOOL shopRecommendEnabled;
@property (nonatomic) BOOL longConnectionEnabled;
@property (nonatomic) IESECGoodsDetailPopupControl popupWhenClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)detailControl;
- (BOOL)gulEnabled;
- (BOOL)longConnectionEnabled;
- (id)popupWhenClose;
- (void)setDetailControl:;
- (void)setGulEnabled:;
- (void)setLongConnectionEnabled:;
- (void)setPopupWhenClose:;
- (void)setShopRecommendEnabled:;
- (BOOL)shopRecommendEnabled;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
