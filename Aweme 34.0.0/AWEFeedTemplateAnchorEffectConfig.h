@interface AWEFeedTemplateAnchorEffectConfig : AWEFeedTemplateAnchorBaseConfig
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorClick;
- (void)trackerForTemplateAnchorShow;
- (void)trackerForTemplateAnchorClick;
- (id)trackerCommonParamsForTemplateAnchor;
- (id)trackerParams;
- (void)routerToNextPage;
- (void)routerToDetailTrackerParams;
- (id)stickerDetailModel;
- (void)routerRecorderText;
- (void)routerStickerShoot;
- (void)routerStickerDetail;
- (void)handleStickerShootError:;
@end
