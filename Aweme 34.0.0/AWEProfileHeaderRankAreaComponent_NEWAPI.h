@interface AWEProfileHeaderRankAreaComponent_NEWAPI : AWEProfileHeaderBaseComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) AWEProfileHeaderCraftsmanBillboardComponent_NEWAPI craftsComponent;
@property (nonatomic) AWEProfileHeaderRankLabelComponent_NEWAPI rankLabelComponent;
@property (nonatomic) AWEProfileHeaderRankComponent_NEWAPI rankComponent;
- (id)buildSubComponents;
- (id)buildVirtualView:;
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
