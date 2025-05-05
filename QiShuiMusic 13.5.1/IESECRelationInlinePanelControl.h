@interface IESECRelationInlinePanelControl : UIView
@property (nonatomic) IESECRelationInlineVideoSwitch videoSwitch;
@property (nonatomic) IESECRelationInlineDanmakuView danmakuView;
@property (nonatomic) @? actionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDanmakuView:;
- (void)setVideoSwitch:;
- (id)danmakuView;
- (void)showDanmakuViewWithDataArray:;
- (void)showSwitchWithTypes:;
- (void)switchClick:isOn:;
- (void)updateState:state:;
- (id)videoSwitch;
- (id)actionBlock;
- (id)initWithPlayer:;
- (void)stop;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setActionBlock:;
@end
