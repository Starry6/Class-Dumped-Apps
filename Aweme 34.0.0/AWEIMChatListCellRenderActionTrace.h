@interface AWEIMChatListCellRenderActionTrace : IESIMFPSActionTrace
@property (nonatomic) NSMutableSet chatTypes;
@property (nonatomic) NSMutableSet sections;
- (void)setChatTypes:;
- (id)chatTypes;
- (void)handleActionTraitDict:;
- (void)handleFrameTraceTrait:;
- (id)traitDict;
- (id)init;
- (id)sections;
- (void)setSections:;
- (void).cxx_destruct;
@end
