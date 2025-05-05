@interface UIPickerTableViewCell : UITableViewCell
@property (nonatomic) UIPickerTableView pickerTable;
- (void)_tapAction:;
- (void)setPickerTable:;
- (id)pickerTable;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)_setIsCenterCell:shouldModifyAlphaOfView:;
+ (void)_resetFontCacheForLegitbilityWeight:;
+ (id)_centerCellFont;
+ (id)_nonCenterCellFont;
+ (id)_centerCellDigitFont;
+ (id)_nonCenterCellDigitFont;
@end
