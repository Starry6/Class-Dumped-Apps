@interface AWECoverEditorTextSwitchCollectionViewTemplateCell : UIView
@property (nonatomic) double panelHeight;
@property (nonatomic) AWETextTemplateController textTemplateController;
@property (nonatomic) ACCTextStickerView currentTextStickerView;
@property (nonatomic) BOOL isTextTemplateUsed;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) <AWECoverEditorTextSwitchCollectionViewTemplateCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)panelHeight;
- (id)publishModel;
- (void)setPanelHeight:;
- (void)setPublishModel:;
- (void)stickerPickerController:didDeselectSticker:;
- (void)stickerPickerController:didSelectSticker:extraParams:indexPath:;
- (id)initWithPublishModel:panelHeight:;
- (void)scrollToSelectedTemplateWithStickerView:;
- (void)clearSelectedTemplate;
- (id)textTemplateController;
- (id)currentTextStickerView;
- (void)setCurrentTextStickerView:;
- (void)setIsTextTemplateUsed:;
- (void)setTextTemplateController:;
- (BOOL)isTextTemplateUsed;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
+ (id)createTemplatePickerConfigWithPanelHeight:;
@end
