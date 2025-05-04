@interface AWEStickerPickerDefaultCategoryUIConfiguration : NSObject
@property (nonatomic) @? layoutHandler;
@property (nonatomic) BOOL inIMRecordPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLayoutHandler:;
- (id)categoryTabListBackgroundColor;
- (double)categoryTabListViewHeight;
- (id)clearEffectButtonAccessibilityLabel;
- (id)layoutHandler;
- (BOOL)supportClearButton;
- (id)clearButtonSeparatorColor;
- (id)categoryTabListBottomBorderColor;
- (id)clearEffectButtonImage;
- (Class)categoryItemCellClass;
- (id)stickerPickerCategoryTabView:layout:sizeForItemAtIndexPath:;
- (void)setInIMRecordPage:;
- (BOOL)inIMRecordPage;
- (void).cxx_destruct;
@end
