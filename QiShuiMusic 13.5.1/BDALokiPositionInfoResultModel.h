@interface BDALokiPositionInfoResultModel : BDXBridgeModel
@property (nonatomic) NSNumber left;
@property (nonatomic) NSNumber right;
@property (nonatomic) NSNumber bottom;
@property (nonatomic) NSNumber top;
- (id)top;
- (void)setTop:;
- (id)left;
- (void).cxx_destruct;
- (id)bottom;
- (id)right;
- (void)setBottom:;
- (void)setLeft:;
- (void)setRight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
