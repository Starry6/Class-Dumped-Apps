@interface AWEIMCellLiveStatusPresenter : AWEIMCellPresenterBase
@property (nonatomic) BOOL enableClick;
@property (nonatomic) BOOL isNormalChat;
@property (nonatomic) <AWELiveEntryProtocol> liveEntryProtocol;
@property (nonatomic) NSString content;
- (void)setDisplayEnable:;
- (id)initWithEnableClick:isNormalChat:;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)liveEntryProtocol;
- (BOOL)enableClick;
- (void)updateLiveColorRingHidden:;
- (void)setLiveEntryProtocol:;
- (BOOL)isNormalChat;
- (id)initWithEnableClick:isNormalChat:withLiveEntryProtocol:;
- (id)createViewInCell:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
@end
