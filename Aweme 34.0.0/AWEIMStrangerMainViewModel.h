@interface AWEIMStrangerMainViewModel : NSObject
@property (nonatomic) AWEIMUserViewModel messageSenderOrRecallerVM;
@property (nonatomic) AWEIMChatCellHintViewModel hintVM;
@property (nonatomic) AWEIMChatCellHintModel displayingHintModel;
@property (nonatomic) NSString name;
@property (nonatomic) NSString time;
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) NSAttributedString messageText;
@property (nonatomic) NSAttributedString draftText;
@property (nonatomic) NSString birthday;
@property (nonatomic) NSString city;
@property (nonatomic) NSInteger gender;
@property (nonatomic) NSString toast;
@property (nonatomic) q status;
@property (nonatomic) NSArray items;
@property (nonatomic) double cellHeight;
@property (nonatomic) Q weight;
@property (nonatomic) NSString accessibilityMessageLabelText;
@property (nonatomic) <AWEIMChatListHintProviderCellInterface> hintProviderService;
@property (nonatomic) <AWEIMStrangerMainViewModelDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMChatModel chatModel;
@property (nonatomic) Q viewModelType;
@property (nonatomic) BOOL isTrash;
@property (nonatomic) NSDictionary ext;
@property (nonatomic) BOOL enableDraftHintProvider;
@property (nonatomic) BOOL shouldShowVerifiedLogo;
@property (nonatomic) BOOL allowShowVerifiedLogoWhenAccountIsVerifiedEnterprise;
@property (nonatomic) NSArray disabledLabelStatus;
@property (nonatomic) NSString trackerTabName;
- (void)setExt:;
- (id)draftText;
- (void)setDraftText:;
- (id)chatModel;
- (void)setChatModel:;
- (id)displayingHintModel;
- (void)setMessageSenderOrRecallerVM:;
- (id)messageSenderOrRecallerVM;
- (id)trackerTabName;
- (void)setTrackerTabName:;
- (unsigned long long)viewModelType;
- (void)setViewModelType:;
- (void)callback_chatUpdate:dataManagerType:;
- (void)callback_chatDeleted:chatInserted:firstPage:reason:dataManagerType:;
- (void)callback_totalUnreadCountUpdate:;
- (void)callback_peerUserUpdate:ofChat:;
- (void)callback_didEndPullOfflineMessagesWithHasMore:dataManagerType:;
- (void)setHintProviderService:;
- (id)hintProviderService;
- (id)hintVM;
- (void)setHintVM:;
- (void)setDisplayingHintModel:;
- (void)setIsTrash:;
- (void)updateDraftText;
- (void)updateMessageLabelDisplayText;
- (BOOL)enableDraftHintProvider;
- (id)accessibilityMessageLabelText;
- (BOOL)shouldShowVerifiedLogo;
- (void)clearStrangerLabels;
- (void)analysisExt:;
- (void)calCellHeight;
- (void)updateHintViewModelWithChatModel:;
- (void)convertToAge;
- (id)disabledLabelStatus;
- (void)updateDisplayTextAccordingToUser:;
- (id)displayTextForChat;
- (id)p_attributedContent:emojiImage:;
- (id)p_attributedContent:;
- (void)setAccessibilityMessageLabelText:;
- (id)__replaceWithHintForContent:;
- (BOOL)allowShowVerifiedLogoWhenAccountIsVerifiedEnterprise;
- (void)setShouldShowVerifiedLogo:;
- (id)__convertTimeStamp:;
- (void)setEnableDraftHintProvider:;
- (void)setAllowShowVerifiedLogoWhenAccountIsVerifiedEnterprise:;
- (void)setDisabledLabelStatus:;
- (id)time;
- (void)setWeight:;
- (void)setTime:;
- (id)birthday;
- (unsigned long long)weight;
- (id)items;
- (id)delegate;
- (void)setStatus:;
- (id)city;
- (void)setItems:;
- (void)setGender:;
- (void)updateTime;
- (int)gender;
- (void).cxx_destruct;
- (long long)status;
- (void)setCity:;
- (void)setDelegate:;
- (void)setName:;
- (id)name;
- (void)setBirthday:;
- (void)setMessageText:;
- (id)messageText;
- (void)setAvatarImage:;
- (id)avatarImage;
- (double)cellHeight;
- (void)setCellHeight:;
- (void)setToast:;
- (id)toast;
- (BOOL)isTrash;
- (id)ext;
- (void)updateName:;
+ (BOOL)enableStrangerAntiDisturbOpt;
@end
