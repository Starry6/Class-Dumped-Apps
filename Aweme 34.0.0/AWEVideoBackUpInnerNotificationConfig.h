@interface AWEVideoBackUpInnerNotificationConfig : DUXInAppNotificationConfig
@property (nonatomic) @? editDraftBlock;
@property (nonatomic) @? saveDraftBlock;
@property (nonatomic) @? cleanBackUpBlock;
@property (nonatomic) BOOL saveDraft;
@property (nonatomic) double dismissTimerInterval;
@property (nonatomic) BOOL disablePullIndicatorView;
- (BOOL)disablePullIndicatorView;
- (double)dismissTimerInterval;
- (void)setDisablePullIndicatorView:;
- (id)editDraftBlock;
- (void)setEditDraftBlock:;
- (id)saveDraftBlock;
- (void)setSaveDraftBlock:;
- (id)cleanBackUpBlock;
- (void)setCleanBackUpBlock:;
- (BOOL)saveDraft;
- (void)setSaveDraft:;
- (void)setDismissTimerInterval:;
- (void).cxx_destruct;
@end
