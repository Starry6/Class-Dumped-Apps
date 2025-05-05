@interface UITextFormattingCoordinator : NSObject
@property (nonatomic) <UITextFormattingCoordinatorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithWindowScene:;
- (void)updateTextAttributesWithConversionHandler:;
- (void)setDelegate:;
- (void)fontPickerViewControllerDidPickFont:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setSelectedAttributes:isMultiple:;
+ (id)textFormattingCoordinatorForWindowScene:;
+ (BOOL)isFontPanelVisible;
+ (void)toggleFontPanel:;
@end
