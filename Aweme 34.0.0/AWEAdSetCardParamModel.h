@interface AWEAdSetCardParamModel : BDXBridgeModel
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double crossOffsetTop;
- (double)crossOffsetTop;
- (void)setCrossOffsetTop:;
- (void)setHeight:;
- (void)setWidth:;
- (double)width;
- (double)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
