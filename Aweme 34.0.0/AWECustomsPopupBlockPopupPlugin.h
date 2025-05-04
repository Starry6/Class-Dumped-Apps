@interface AWECustomsPopupBlockPopupPlugin : NSObject
@property (nonatomic) <AWEMRForceCommonDialogAbilityProtocol> ability;
@property (nonatomic) @? confirmAction;
@property (nonatomic) @? cancelAction;
@property (nonatomic) NSDictionary trackExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackExtra;
- (void)setTrackExtra:;
- (void)setAbility:;
- (id)ability;
- (void)commonDialog_setAbility:;
- (void)commonDialog_didClickCloseBtnWithContext:dialogConfig:;
- (BOOL)commonDialog_interceptClickActionWithContext:dialogConfig:buttonConfig:;
- (BOOL)commonDialog_interceptCountDownActionWithContext:dialogConfig:buttonConfig:;
- (id)commonDialog_paramsForEvent:context:dialogConfig:;
- (id)initWithConfirmAction:cancelAction:trackExtra:;
- (void).cxx_destruct;
- (void)setCancelAction:;
- (id)cancelAction;
- (id)confirmAction;
- (void)setConfirmAction:;
@end
