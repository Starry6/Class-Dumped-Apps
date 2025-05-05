@interface UIFontPickerController : NSObject
@property (nonatomic) Q mode;
@property (nonatomic) UIFontDescriptor selectedFont;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIFontDescriptor selectedFontDescriptor;
@property (nonatomic) <UIFontPickerDelegate> delegate;
- (id)remoteViewController;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (unsigned long long)mode;
- (void)setMode:;
- (void)fontPickerDidPickFont:;
- (void)fontPickerWasCancelled:;
- (id)selectedFontDescriptor;
- (void)setSelectedFontDescriptor:;
- (BOOL)presentFontPickerFromRect:inView:animated:;
- (BOOL)presentFontPickerFromBarButtonItem:animated:;
- (id)selectedFont;
- (void)setSelectedFont:;
@end
