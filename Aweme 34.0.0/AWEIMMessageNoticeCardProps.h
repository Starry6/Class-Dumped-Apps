@interface AWEIMMessageNoticeCardProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapActionBlock;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) AWEIMMessage message;
- (void)setHasBackground:;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (id)message;
- (BOOL)hasBackground;
- (void).cxx_destruct;
- (void)setMessage:;
@end
