@interface AWEProfileHeaderRankAreaComponent : AWERLComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) AWEProfileHeaderCraftsmanBillboardComponent craftsComponent;
@property (nonatomic) AWEProfileHeaderRankLabelComponent rankLabelComponent;
@property (nonatomic) AWEProfileHeaderRankComponent rankComponent;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (id)initWithData:context:maxWidth:;
- (id)rankLabelComponent;
- (id)craftsComponent;
- (id)rankComponent;
- (void)setCraftsComponent:;
- (void)setRankLabelComponent:;
- (void)setRankComponent:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
@end
