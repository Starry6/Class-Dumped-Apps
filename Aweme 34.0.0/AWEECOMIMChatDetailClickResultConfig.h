@interface AWEECOMIMChatDetailClickResultConfig : NSObject
@property (nonatomic) BOOL enableTopToolbar;
@property (nonatomic) BOOL enableTopChatInfo;
@property (nonatomic) BOOL enableBottomFloatingWindow;
@property (nonatomic) BOOL enableBottomSelfService;
@property (nonatomic) BOOL enableMorePanelArea;
@property (nonatomic) BOOL enableNewMsgDetailDisplay;
@property (nonatomic) BOOL enableCardResourceList;
- (BOOL)enableTopToolbar;
- (BOOL)enableNewMsgDetailDisplay;
- (BOOL)enableBottomFloatingWindow;
- (BOOL)enableTopChatInfo;
- (BOOL)enableBottomSelfService;
- (BOOL)enableMorePanelArea;
- (BOOL)enableCardResourceList;
- (id)initWithDict:;
@end
