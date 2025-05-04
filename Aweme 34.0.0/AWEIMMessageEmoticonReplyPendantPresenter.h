@interface AWEIMMessageEmoticonReplyPendantPresenter : AWEIMUIViewPresenter
@property (nonatomic) @? didClickReplyView;
@property (nonatomic) @? didClickReplyViewMoreUser;
@property (nonatomic) @? didClickReplyViewUser;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)willUnBindView:;
- (BOOL)isMeasurementRequired;
- (id)sizeThatFit:;
- (void)setDidClickReplyView:;
- (void)setDidClickReplyViewMoreUser:;
- (void)setDidClickReplyViewUser:;
- (id)createEmojiReplyViewWithContext:;
- (id)didClickReplyView;
- (id)didClickReplyViewMoreUser;
- (id)didClickReplyViewUser;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
