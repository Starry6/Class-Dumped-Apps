@interface AWEIMCollectCardContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapBlock;
@property (nonatomic) {CGSize=dd} containerSize;
@property (nonatomic) Q cardStyle;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString bgURLString;
@property (nonatomic) BOOL showDarkView;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setShowDarkView:;
- (void)setBgURLString:;
- (id)bgURLString;
- (BOOL)showDarkView;
- (id)subtitle;
- (id)containerSize;
- (void)setSubtitle:;
- (void)setContainerSize:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (unsigned long long)cardStyle;
- (void)setCardStyle:;
@end
