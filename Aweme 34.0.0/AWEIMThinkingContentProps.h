@interface AWEIMThinkingContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) Q thinkingStatus;
@property (nonatomic) NSString titleText;
@property (nonatomic) NSAttributedString thinkingContent;
@property (nonatomic) BOOL needFoldThink;
@property (nonatomic) @? tapAction;
- (void)setThinkingContent:;
- (void)setThinkingStatus:;
- (void)setNeedFoldThink:;
- (id)thinkingContent;
- (BOOL)needFoldThink;
- (unsigned long long)thinkingStatus;
- (void)setTitleText:;
- (id)titleText;
- (void).cxx_destruct;
- (id)tapAction;
- (void)setTapAction:;
@end
