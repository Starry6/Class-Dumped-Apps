@interface IESECGoodsDetailHeaderFooter : IESECBaseApiModel
@property (nonatomic) NSString url;
@property (nonatomic) IESECGoodsDetailHeaderSliceModel slice;
@property (nonatomic) IESECHeaderSliceAction scrollAction;
@property (nonatomic) IESECSliceAction pdpScrollAction;
- (id)pdpScrollAction;
- (id)scrollAction;
- (void)setPdpScrollAction:;
- (void)setScrollAction:;
- (id)url;
- (void)setSlice:;
- (void)setUrl:;
- (id)slice;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
