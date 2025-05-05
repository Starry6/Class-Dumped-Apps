@interface IESLiveInteractAnchorLinkerModel : NSObject
@property (nonatomic) Q selectedStyle;
@property (nonatomic) <IESLiveInteractUserModel> interactUser;
@property (nonatomic) q status;
@property (nonatomic) BOOL showSelected;
@property (nonatomic) BOOL showPendingClickStyle;
@property (nonatomic) Q alignPosition;
@property (nonatomic) BOOL showChangeBtn;
@property (nonatomic) BOOL disableGenderDisplay;
- (unsigned long long)alignPosition;
- (BOOL)disableGenderDisplay;
- (id)interactUser;
- (unsigned long long)selectedStyle;
- (void)setAlignPosition:;
- (void)setDisableGenderDisplay:;
- (void)setInteractUser:;
- (void)setSelectedStyle:;
- (void)setShowChangeBtn:;
- (void)setShowPendingClickStyle:;
- (void)setShowSelected:;
- (BOOL)showChangeBtn;
- (BOOL)showPendingClickStyle;
- (BOOL)showSelected;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
@end
