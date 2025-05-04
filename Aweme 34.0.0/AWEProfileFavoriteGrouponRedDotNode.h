@interface AWEProfileFavoriteGrouponRedDotNode : AWEProfileFavoriteSecondTabRedDotBaseNode
@property (nonatomic) BOOL hasDisappeared;
@property (nonatomic) NSDictionary bizData;
- (void)setBizData:;
- (id)bizData;
- (void)updateCurrentModel:;
- (BOOL)hasDisappeared;
- (void)setHasDisappeared:;
- (void)endPolling;
- (void)redDotDismissedWithReason:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startPolling;
@end
