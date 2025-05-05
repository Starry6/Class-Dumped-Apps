@interface BDUGLuckyPersonalCommonInfo : BDUGLuckyBDModel
@property (nonatomic) BDUGLuckySettingsPopup popup;
@property (nonatomic) NSArray<BDUGLuckySettingsPopup> pollingPopupList;
@property (nonatomic) BDUGLuckyColdPopup coldPopup;
@property (nonatomic) BDUGLuckyTabInfoList tabInfo;
@property (nonatomic) NSDictionary extra;
- (id)tabInfo;
- (id)coldPopup;
- (id)pollingPopupList;
- (void)setColdPopup:;
- (void)setExtra:;
- (void)setPollingPopupList:;
- (void)setTabInfo:;
- (id)extra;
- (void).cxx_destruct;
- (id)popup;
- (void)setPopup:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
