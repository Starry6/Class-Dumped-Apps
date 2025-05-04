@interface AWEShareStickerBaseService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithSticker:extraLogInfo:onViewController:;
- (id)contextWithSticker:;
- (id)statsShareStickerStage;
@end
