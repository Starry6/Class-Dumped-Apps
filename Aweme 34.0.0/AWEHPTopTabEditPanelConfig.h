@interface AWEHPTopTabEditPanelConfig : NSObject
@property (nonatomic) NSArray itemList;
@property (nonatomic) @? clickSaveCallback;
@property (nonatomic) @? dismissCallback;
@property (nonatomic) @? currentChannelID;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL needHaptic;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)dismissCallback;
- (void)setDismissCallback:;
- (void)setCurrentChannelID:;
- (void)setClickSaveCallback:;
- (id)clickSaveCallback;
- (BOOL)needHaptic;
- (void)setNeedHaptic:;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:;
- (id)currentChannelID;
@end
