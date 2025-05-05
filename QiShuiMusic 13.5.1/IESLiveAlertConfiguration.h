@interface IESLiveAlertConfiguration : NSObject
@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL actionsAxisForceVertical;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) BOOL autoDismiss;
@property (nonatomic) BOOL dismissOnTapBackground;
@property (nonatomic) @? descriptionTapBlock;
@property (nonatomic) NSArray actionConfigurations;
- (void)setUseNewStyle:;
- (id)actionConfigurations;
- (BOOL)actionsAxisForceVertical;
- (id)descriptionTapBlock;
- (BOOL)dismissOnTapBackground;
- (void)setActionConfigurations:;
- (void)setActionsAxisForceVertical:;
- (void)setDescriptionTapBlock:;
- (void)setDismissOnTapBackground:;
- (BOOL)useNewStyle;
- (void)setAutoDismiss:;
- (void).cxx_destruct;
- (BOOL)autoDismiss;
- (void)setShowCloseButton:;
- (BOOL)showCloseButton;
@end
