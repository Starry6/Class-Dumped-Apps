@interface AWEStoryBizUI.StoryListWrapperCell : AWEStoryBizUI.StoryListBaseCell
@property (nonatomic) BOOL highlighted;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)initWithCoder:;
@end
