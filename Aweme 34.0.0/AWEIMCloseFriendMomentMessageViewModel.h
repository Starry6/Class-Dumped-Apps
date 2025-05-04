@interface AWEIMCloseFriendMomentMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) AWEIMCloseFriendMomentMessage realMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCoverImageView:;
- (void)setupWithMessage:;
- (id)momentContent;
- (id)realMessage;
- (void)setRealMessage:;
- (void)configAuthorIconImageView:;
- (void)configDescLabel:;
- (void)configAuthorNameLabel:;
- (void)configDescLabelBackgroundView:;
- (id)unavailableString;
- (long long)quickReplyUIStyle;
- (id)contentSize;
- (void).cxx_destruct;
- (id)userModel;
- (id)menuItems;
- (BOOL)contentIsAvailable;
- (BOOL)shouldShowPlayIcon;
+ (id)contentSizeWithMessage:;
+ (BOOL)contentIsAvailableWithMessage:;
+ (id)unavailableStringWithMessage:;
@end
