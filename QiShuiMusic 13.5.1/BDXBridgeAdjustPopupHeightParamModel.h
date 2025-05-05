@interface BDXBridgeAdjustPopupHeightParamModel : BDXBridgeModel
@property (nonatomic) NSNumber heightPercent;
@property (nonatomic) NSNumber animated;
@property (nonatomic) NSNumber draggable;
- (void)setAnimated:;
- (void)setDraggable:;
- (id)animated;
- (void).cxx_destruct;
- (id)draggable;
- (id)heightPercent;
- (void)setHeightPercent:;
+ (id)JSONKeyPathsByPropertyKey;
@end
