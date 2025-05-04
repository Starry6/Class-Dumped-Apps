@interface AWESharePOIGoodsService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sharePOIGoodsWithModel:shareType:;
- (void)showPanelWithPOIGoodsModel:configurationHandler:onViewController:;
@end
