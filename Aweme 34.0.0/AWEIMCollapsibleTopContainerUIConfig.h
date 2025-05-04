@interface AWEIMCollapsibleTopContainerUIConfig : NSObject
@property (nonatomic) UIColor backgroundColorWhenExpanded;
@property (nonatomic) UIColor backgroundColorWhenCollapsed;
@property (nonatomic) {CGPoint=dd} origin;
@property (nonatomic) {CGSize=dd} cornerRadii;
@property (nonatomic) BOOL hideDragHintView;
@property (nonatomic) NSString lightExpandedHexColor;
@property (nonatomic) NSString darkExpandedHexColor;
@property (nonatomic) BOOL isPadSplitting;
- (void)setIsPadSplitting:;
- (BOOL)isPadSplitting;
- (void)setBackgroundColorWhenCollapsed:;
- (void)setDarkExpandedHexColor:;
- (void)setLightExpandedHexColor:;
- (void)setBackgroundColorWhenExpanded:;
- (id)backgroundColorWhenExpanded;
- (id)backgroundColorWhenCollapsed;
- (BOOL)hideDragHintView;
- (void)setHideDragHintView:;
- (id)lightExpandedHexColor;
- (id)darkExpandedHexColor;
- (void)setOrigin:;
- (void)setCornerRadii:;
- (id)origin;
- (void).cxx_destruct;
- (id)cornerRadii;
@end
