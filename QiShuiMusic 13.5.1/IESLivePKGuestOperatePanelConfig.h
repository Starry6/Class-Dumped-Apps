@interface IESLivePKGuestOperatePanelConfig : NSObject
@property (nonatomic) BOOL isSelf;
@property (nonatomic) HTSLiveUser currentUser;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) <IESLiveInteractUserModel> interactGuestUser;
@property (nonatomic) NSString title;
@property (nonatomic) q titlePosition;
@property (nonatomic) Q optionItems;
@property (nonatomic) Q connectModeItems;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL showEmoji;
@property (nonatomic) Q sceneForGuest;
- (unsigned long long)connectModeItems;
- (id)interactGuestUser;
- (id)roomModel;
- (unsigned long long)sceneForGuest;
- (void)setConnectModeItems:;
- (void)setInteractGuestUser:;
- (void)setRoomModel:;
- (void)setSceneForGuest:;
- (void)setShowEmoji:;
- (BOOL)showEmoji;
- (void)setIsExpanded:;
- (void)setCurrentUser:;
- (id)init;
- (BOOL)isExpanded;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)currentUser;
- (void)setIsSelf:;
- (BOOL)isSelf;
- (long long)titlePosition;
- (void)setTitlePosition:;
- (unsigned long long)optionItems;
- (void)setOptionItems:;
@end
