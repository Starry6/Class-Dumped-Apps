@interface AWEIMChatListHintProviderComponentBase : AWEIMComponentBase
@property (nonatomic) <AWEIMChatListHintProviderUpdateHintInterface> hintUpdateService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (id)hintUpdateService;
- (void)didDisplayedHint:cellContext:;
- (void)didClickedHint:cellContext:;
- (void)setHintUpdateService:;
- (id)chatListTrackerServiceFromCellContext:;
- (BOOL)isCompatibleWithSnapshot;
- (BOOL)isCompatibleWithMention;
- (long long)hintLineBreakMode;
- (id)incompatibleMessageTabModes;
- (void).cxx_destruct;
@end
