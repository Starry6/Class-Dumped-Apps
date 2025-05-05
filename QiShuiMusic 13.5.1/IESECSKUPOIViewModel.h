@interface IESECSKUPOIViewModel : NSObject
@property (nonatomic) IESECSKUModel skuModel;
@property (nonatomic) IESECSKUDetailContext detailContext;
@property (nonatomic) IESECGoodsPOIModel poiInfo;
@property (nonatomic) NSString poiListURLString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSKUModel:detailContext:;
- (id)poiInfo;
- (id)detailContext;
- (BOOL)enableSwitch;
- (id)hintText;
- (id)poiListURLString;
- (void)setDetailContext:;
- (void)setPoiInfo:;
- (void)setSkuModel:;
- (BOOL)showHint;
- (id)skuModel;
- (void)trackPOIInfoShow;
- (void).cxx_destruct;
@end
