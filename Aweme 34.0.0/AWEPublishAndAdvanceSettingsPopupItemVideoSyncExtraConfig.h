@interface AWEPublishAndAdvanceSettingsPopupItemVideoSyncExtraConfig : AWEPublishAndAdvanceSettingsPopupItemBaseExtraConfig
@property (nonatomic) BOOL ulikeShow;
@property (nonatomic) BOOL ulikeSelected;
@property (nonatomic) BOOL xiguaShow;
@property (nonatomic) BOOL xiguaSelected;
@property (nonatomic) AWEPublishVideoSyncModel_V2 syncModel;
@property (nonatomic) <AWEPublishAndAdvanceSettingsPopupItemVideoSyncEvent> eventProxy;
- (void)setSyncModel:;
- (id)syncModel;
- (void)setUlikeShow:;
- (void)setUlikeSelected:;
- (void)setXiguaShow:;
- (void)setXiguaSelected:;
- (void)setEventProxy:;
- (BOOL)ulikeShow;
- (BOOL)ulikeSelected;
- (BOOL)xiguaShow;
- (BOOL)xiguaSelected;
- (id)eventProxy;
- (void).cxx_destruct;
@end
