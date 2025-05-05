@interface IESECRelationInlineVideoSwitch : UIView
@property (nonatomic) <IESECRelationInlineVideoSwitchDelegate> delegate;
- (void)clickSwitch:;
- (id)initWithSwitchTypes:;
- (void)updateState:state:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
- (id)line:;
@end
