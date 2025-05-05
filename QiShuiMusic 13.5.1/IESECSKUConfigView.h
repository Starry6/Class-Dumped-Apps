@interface IESECSKUConfigView : UIView
@property (nonatomic) NSArray contents;
@property (nonatomic) NSNumber height;
@property (nonatomic) BOOL alignRight;
@property (nonatomic) IESECLStackContainerView stackContainer;
@property (nonatomic) @? onLayoutBlock;
- (BOOL)alignRight;
- (void)configUI;
- (id)initWithContents:height:alignRight:;
- (id)onLayoutBlock;
- (void)setAlignRight:;
- (void)setOnLayoutBlock:;
- (void)setStackContainer:;
- (id)stackContainer;
- (id)contents;
- (id)height;
- (void)setContents:;
- (void)setHeight:;
- (void).cxx_destruct;
@end
