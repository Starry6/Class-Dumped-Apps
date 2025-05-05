@interface IESECMallXBridgeEcMallGetCardPositionMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString sectionID;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString elementName;
@property (nonatomic) NSString target;
@property (nonatomic) NSNumber coordinate;
@property (nonatomic) NSNumber index;
- (void)setSectionID:;
- (id)itemID;
- (id)sectionID;
- (void)setItemID:;
- (id)elementName;
- (id)index;
- (void)setTarget:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)coordinate;
- (id)target;
- (void)setCoordinate:;
- (void)setElementName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
