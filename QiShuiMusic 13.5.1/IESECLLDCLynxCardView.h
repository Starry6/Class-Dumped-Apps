@interface IESECLLDCLynxCardView : UIView
@property (nonatomic) PuzzleHybridContainer container;
@property (nonatomic) IESECGoodsDetailLynxCardElement element;
@property (nonatomic) <IESHYHybridViewLifecycleProtocol> delegate;
@property (nonatomic) NSString identifier;
- (id)initWithFrame:element:delegate:identifier:loadDelay:;
- (void)reloadWithElement:;
- (id)element;
- (void)setContainer:;
- (void)load;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)container;
- (id)identifier;
- (id)hitTest:withEvent:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setElement:;
- (void)setIdentifier:;
@end
