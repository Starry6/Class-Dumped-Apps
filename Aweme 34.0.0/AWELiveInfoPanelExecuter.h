@interface AWELiveInfoPanelExecuter : NSObject
@property (nonatomic) @? block;
@property (nonatomic) BOOL executeButtonActionAfterClose;
@property (nonatomic) @? buttonAction;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidDismiss:;
- (BOOL)executeButtonActionAfterClose;
- (void)setExecuteButtonActionAfterClose:;
- (void)executeBlock;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (id)buttonAction;
- (void)setButtonAction:;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
