@interface AWEPOIEntryViewUtil : NSObject
+ (double)stringWidthWithString:type:scene:layout:;
+ (id)itemFontWithItemType:entryViewScene:entryViewLayout:;
+ (id)itemColorWithItemType:entryViewScene:isBGColorWhite:entryViewLayout:;
+ (double)entryViewHeightWithEntryViewLayout:shouldShowDetail:;
+ (BOOL)shouldAddSeparatorLineWithItemStyle:;
+ (id)separatorLineColorWithEntryViewScene:layout:isBGColorWhite:;
+ (id)itemFontWithSize:entryViewScene:;
+ (id)itemColorWithHexString:defaultColor:;
+ (double)itemHeightWithItemType:entryViewScene:entryViewLayout:;
+ (id)grayLabelBackgroundColorWithEntryViewScene:isBGColorWhite:;
+ (id)grayLabelTextColorWithEntryViewScene:isBGColorWhite:;
+ (id)grayLabelFontWithItemType:entryViewScene:entryViewLayout:;
+ (double)p_stringWidthWithString:height:font:;
+ (double)stringWidthWithString:style:type:scene:textSize:layout:;
+ (double)stringWidthWithString:type:scene:textSize:layout:;
+ (id)itemFontWithItemType:entryViewScene:textSize:entryViewLayout:;
@end
