@interface IESLivePrivilegeDanmakuSettingItem : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) HTSLiveTabItem selectedTabItem;
@property (nonatomic) double settingViewHeight;
@property (nonatomic) @? cancelSelectAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectedTabItem;
- (id)cancelSelectAction;
- (void)setCancelSelectAction:;
- (void)setSelectedTabItem:;
- (void)setSettingViewHeight:;
- (double)settingViewHeight;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)reset;
- (void)setEnable:;
@end
