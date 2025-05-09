@interface IESECSliceXScrollElementView : IESECSliceXBaseScrollView
@property (nonatomic) NSValue needScrollToOffset;
@property (nonatomic) BOOL needRecordContentOffset;
@property (nonatomic) IESECSliceXElement element;
@property (nonatomic) NSMutableArray elementViews;
@property (nonatomic) UIView bgView;
@property (nonatomic) IESECSliceXElementViewContext context;
@property (nonatomic) IESECSliceXFlex flex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)elementViews;
- (BOOL)needRecordContentOffset;
- (id)needScrollToOffset;
- (void)setElementViews:;
- (void)setNeedRecordContentOffset:;
- (void)setNeedScrollToOffset:;
- (void)setupElementView;
- (BOOL)updateWithSliceXElement:error:;
- (id)element;
- (void)setContentOffset:;
- (id)context;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setElement:;
- (id)bgView;
- (void)setBgView:;
@end
