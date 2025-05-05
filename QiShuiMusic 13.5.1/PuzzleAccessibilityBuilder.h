@interface PuzzleAccessibilityBuilder : NSObject
@property (nonatomic) NSObject constrctingView;
@property (nonatomic) NSObject containerView;
@property (nonatomic) UIAccessibilityElement containerViewPlaceholderElement;
@property (nonatomic) NSMutableArray elements;
@property (nonatomic) @? label;
@property (nonatomic) @? calAccessFrame;
@property (nonatomic) @? hint;
- (id)constrctingView;
- (id)containerViewPlaceholderElement;
- (id)appendElement;
- (id)appendElementArray;
- (id)calAccessFrame;
- (id)insertElement;
- (id)insertElementArray;
- (void)setConstrctingView:;
- (void)setContainerViewPlaceholderElement:;
- (id)traits;
- (id)initWithView:;
- (id)elements;
- (id)containerView;
- (void)setElements:;
- (void)setContainerView:;
- (id)initWithAccessibilityContainer:;
- (id)label;
- (void).cxx_destruct;
- (id)value;
- (id)hint;
@end
