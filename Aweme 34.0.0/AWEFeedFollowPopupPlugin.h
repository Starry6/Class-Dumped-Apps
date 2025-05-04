@interface AWEFeedFollowPopupPlugin : NSObject
@property (nonatomic) <AWEMRForceCommonDialogAbilityProtocol> ability;
@property (nonatomic) NSDictionary trackExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackExtra;
- (void)setTrackExtra:;
- (void)setAbility:;
- (id)ability;
- (void)updatePopupFrequency;
- (void)closeDialogWithCloseType:completion:;
- (void)commonDialog_setAbility:;
- (void)commonDialog_didShowWithContext:dialogConfig:;
- (void)commonDialog_didClickMaskWithContext:dialogConfig:;
- (void)commonDialog_didClickCloseBtnWithContext:dialogConfig:;
- (BOOL)commonDialog_interceptClickActionWithContext:dialogConfig:buttonConfig:;
- (id)commonDialog_paramsForEvent:context:dialogConfig:;
- (id)initWithTrackExtra:;
- (void).cxx_destruct;
@end
