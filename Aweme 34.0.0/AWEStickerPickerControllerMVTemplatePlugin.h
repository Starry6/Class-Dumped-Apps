@interface AWEStickerPickerControllerMVTemplatePlugin : NSObject
@property (nonatomic) <AWEStickerPickerControllerProtocol> controller;
@property (nonatomic) <ACCMVSelectService> mvSelectService;
@property (nonatomic) <ACCStickerPickerService> stickerPickerService;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)setPublishModel:;
- (void)setStickerPickerService:;
- (id)stickerPickerService;
- (void)stickerPickerService:didSelectMVTemplateSticker:;
- (id)initWithServiceProvider:publishModel:;
- (id)mvSelectService;
- (void)setMvSelectService:;
- (void)controllerViewDidLoad:;
- (void)p_trackMVTemplatePropClicked:;
- (void)setController:;
- (void).cxx_destruct;
- (id)controller;
@end
