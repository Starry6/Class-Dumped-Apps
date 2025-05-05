@interface IESECSliceXBaseElementView : IESECSliceXBaseView
@property (nonatomic) IESECSliceXElement element;
@property (nonatomic) NSMutableArray elementViews;
@property (nonatomic) IESECSliceXElementViewContext context;
@property (nonatomic) UIView bgView;
@property (nonatomic) IESECSliceXFlex flex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)elementViews;
- (void)setElementViews:;
- (void)setupElementView;
- (BOOL)updateWithSliceXElement:error:;
- (id)element;
- (id)context;
- (id)hitTest:withEvent:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setElement:;
- (id)bgView;
@end
