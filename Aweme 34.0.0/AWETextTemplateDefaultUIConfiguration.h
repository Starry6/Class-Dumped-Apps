@interface AWETextTemplateDefaultUIConfiguration : NSObject
@property (nonatomic) <AWETextTemplateCategoryUIConfigurationProtocol> categoryUIConfig;
@property (nonatomic) <AWETextTemplateStickerUIConfigurationProtocol> effectUIConfig;
@property (nonatomic) @? categoryReloadHanlder;
@property (nonatomic) UIColor contentBackgroundColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)categoryUIConfig;
- (id)effectUIConfig;
- (id)panelLoadingView;
- (id)panelErrorView;
- (id)categoryReloadHanlder;
- (id)initWithCategoryUIConfig:effectUIConfig:;
- (void)setCategoryReloadHanlder:;
- (void)setCategoryUIConfig:;
- (void)setEffectUIConfig:;
- (void).cxx_destruct;
- (id)contentBackgroundColor;
- (void)setContentBackgroundColor:;
@end
