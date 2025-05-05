@interface PKPaletteInputAssistantButtonProvider : NSObject
@property (nonatomic) UITextInputAssistantItem inputAssistantItem;
@property (nonatomic) @? inclusionFilter;
- (id)init;
- (id)inputAssistantItem;
- (void)setInputAssistantItem:;
- (void).cxx_destruct;
- (id)initWithInputAssistantItem:;
- (id)buttonsForCurrentConfiguration;
- (id)_nonSystemBarButtonItemGroups;
- (BOOL)_shouldIncludeBarButtonItem:;
- (id)inclusionFilter;
- (void)setInclusionFilter:;
@end
