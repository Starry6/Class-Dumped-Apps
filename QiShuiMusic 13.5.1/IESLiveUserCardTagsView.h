@interface IESLiveUserCardTagsView : UIView
@property (nonatomic) double lineHeight;
@property (nonatomic) Q lineCount;
@property (nonatomic) Q currentLineCount;
@property (nonatomic) double fixedWidth;
@property (nonatomic) UIView preView;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentHeight;
- (id)preView;
- (void)addSubView:viewWidth:isLastView:;
- (unsigned long long)currentLineCount;
- (id)initWithLineCount:lineHeight:fixedWidth:;
- (void)setCurrentLineCount:;
- (void)setPreView:;
- (double)contentHeight;
- (unsigned long long)lineCount;
- (void)setContentWidth:;
- (double)contentWidth;
- (void).cxx_destruct;
- (void)setContentHeight:;
- (double)lineHeight;
- (void)setLineHeight:;
- (void)setLineCount:;
- (void)setFixedWidth:;
- (double)fixedWidth;
@end
