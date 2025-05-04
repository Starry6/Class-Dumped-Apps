@interface AWEStickerApplyHintHandler : AWEStickerApplyBaseHandler
@property (nonatomic) AWEStickerHintView stickerHintView;
@property (nonatomic) BOOL needCheckPropHintShow;
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)flowServiceDidAddFragment:;
- (void)handlerDidBecomeActive;
- (void)camera:willApplySticker:propSource:;
- (void)p_resetStickerHintView;
- (void)checkPropNeedShowHintToast:propSource:;
- (BOOL)p_shouldShowPhotoSensitiveHint:;
- (void)p_showPhotoSensitiveHint:;
- (void)p_showPropHintViewIfNeed:;
- (id)stickerHintView;
- (void)setStickerHintView:;
- (void)setNeedCheckPropHintShow:;
- (BOOL)needCheckPropHintShow;
- (BOOL)getShowComplianceToastCount;
- (void)markComplianceToastCount;
- (id)repository;
- (void).cxx_destruct;
- (void)setRepository:;
@end
