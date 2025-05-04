@interface AWEIMChatListHintProviderLatestMessageComponent : AWEIMChatListHintProviderComponentBase
@property (nonatomic) BOOL ignoreEmptyEnable;
- (void)componentDidMounted:;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:;
- (void)didDisplayedHint:cellContext:;
- (void)didClickedHint:cellContext:;
- (BOOL)isCompatibleWithMention;
- (void)setIgnoreEmptyEnable:;
- (BOOL)ignoreEmptyEnable;
- (void)trackHintEvent:withHintModel:cellContext:;
- (id)typeForChat:;
@end
