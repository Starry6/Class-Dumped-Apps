@interface AWEIMLocalGuidanceEntranceCardMessageTableViewCell : AWEIMLocalFansGroupCardMessageTableViewCell
@property (nonatomic) BOOL isBlockedByTheOtherPerson;
@property (nonatomic) AWEUserModel fullDetailUser;
- (void)configWithMessage:;
- (id)defaultSubTitleStr;
- (void)localFansGroupCardMessageCellTapped;
- (void)updateInviteFansCardUIWithTitleLabel:subTitleLabel:;
- (void)__fetchBlockedStatusAndDataAndUpdateLabels;
- (void)__trackInviteFansCardShow;
- (void)__trackShowEvent;
- (void)__fetchFullDetailUserWithCompletion:;
- (void)__fetchDataIfNecessaryWithCompletion:;
- (BOOL)isBlockedByTheOtherPerson;
- (id)__zeroGroupStr;
- (id)fullDetailUser;
- (void)setFullDetailUser:;
- (void)setIsBlockedByTheOtherPerson:;
- (void)__trackInviteFansCradClick;
- (void)__transferToFansGroupPage;
- (id)__baseTrackParams;
- (void).cxx_destruct;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
