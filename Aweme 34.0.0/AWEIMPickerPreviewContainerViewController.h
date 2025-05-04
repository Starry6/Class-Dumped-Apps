@interface AWEIMPickerPreviewContainerViewController : AWEIMComponentViewController
@property (nonatomic) AWEIMPickerContext componentContext;
@property (nonatomic) AWEIMPickerConfiguration pickerConfig;
@property (nonatomic) AWEIMPickerPreviewViewController previewVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentContext:;
- (id)previewVC;
- (void)setPreviewVC:;
- (void)setPickerConfig:;
- (id)pickerConfig;
- (id)initWithPickerConfiguration:preViewConfiguration:;
- (void).cxx_destruct;
@end
