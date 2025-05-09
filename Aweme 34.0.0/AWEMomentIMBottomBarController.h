@interface AWEMomentIMBottomBarController : NSObject
@property (nonatomic) UIView momentBottomBarView;
@property (nonatomic) UIButton emojiIcon;
@property (nonatomic) UIView textContainer;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)trackNewSendMessageEvent;
- (id)momentBottomBarView;
- (void)openQuickReplyHandlerUsing:;
- (void)trackCloseFriendsMoment;
- (void)didTapTextReply;
- (id)emojiIcon;
- (void)didTapEmojiReply;
- (void)setMomentBottomBarView:;
- (void)setEmojiIcon:;
- (id)textLabel;
- (void)setTextContainer:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)textContainer;
- (void)setTextLabel:;
- (Class)contextClass;
- (id)bottomBarView;
@end
