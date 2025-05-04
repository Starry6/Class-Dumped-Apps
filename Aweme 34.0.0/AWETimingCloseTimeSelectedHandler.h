@interface AWETimingCloseTimeSelectedHandler : NSObject
@property (nonatomic) NSArray timeSelectedOptions;
@property (nonatomic) DUXContentSheet timeSelectedSheet;
@property (nonatomic) DUXContentSheet timePickerSheet;
@property (nonatomic) NSString prePage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)prePage;
- (void)setPrePage:;
- (long long)currentSelectedIndex;
- (void)showTimeSelectedSheetWithPrePage:;
- (id)timeSelectedOptions;
- (void)setTimeSelectedSheet:;
- (void)trackTimeSelectedSheetShow;
- (id)timeSelectedSheet;
- (void)trackTimeCustomizeSheetConfirmWithEnterMethod:timeStatus:clickStatus:;
- (void)showTimeCustomizeSheet;
- (void)trackTimeCustomizeSheetCancel;
- (void)setTimePickerSheet:;
- (void)trackTimeCustomizeSheetShow;
- (id)selectionPanel:optionNameAtRow:;
- (void)selectionPanel:didClickRow:;
- (void)setTimeSelectedOptions:;
- (id)timePickerSheet;
- (void).cxx_destruct;
@end
