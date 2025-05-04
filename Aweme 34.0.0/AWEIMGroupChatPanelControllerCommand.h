@interface AWEIMGroupChatPanelControllerCommand : NSObject
@property (nonatomic) @? run;
- (void)__run:;
- (void)run:inScheduler:;
- (id)initWithRun:;
- (void)setRun:;
- (void)run:;
- (id)run;
- (void).cxx_destruct;
+ (id)commandWithActionType:bizExtension:;
+ (id)transferToSelectToCreatePanelWithBizExtension:;
+ (id)transferToInputConvNameToCreatePanelWithBizExtension:;
+ (id)transferToShareCodeToCreatePanelWithBizExtension:;
+ (id)transferToFaceToFaceCreatePanelWithBizExtension:;
+ (id)transferToJoinGroupPanelWithBizExtension:;
@end
