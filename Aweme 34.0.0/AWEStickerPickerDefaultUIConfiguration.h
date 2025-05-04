@interface AWEStickerPickerDefaultUIConfiguration : NSObject
@property (nonatomic) <AWEStickerPickerCategoryUIConfigurationProtocol> categoryUIConfig;
@property (nonatomic) <AWEStickerPickerEffectUIConfigurationProtocol> effectUIConfig;
@property (nonatomic) @? categoryReloadHanlder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)categoryUIConfig;
- (id)effectUIConfig;
- (id)panelLoadingView;
- (id)panelErrorView;
- (BOOL)supportSearchSuggestWords;
- (id)categoryReloadHanlder;
- (id)initWithCategoryUIConfig:effectUIConfig:;
- (void)setCategoryReloadHanlder:;
- (void)setCategoryUIConfig:;
- (void)setEffectUIConfig:;
- (void).cxx_destruct;
@end
