@interface AWEDPlayerZoomElement : AWEDPlayerInteractionBaseElement
@property (nonatomic) BOOL isZoomIn;
- (id)activateInfoWithData:;
- (BOOL)isZoomIn;
- (void)setIsZoomIn:;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:;
@end
