@interface UITableViewCellLayoutManagerValue1 : UITableViewCellLayoutManager
- (id)textLabelForCell:;
- (double)defaultDetailTextLabelFontSizeForCell:;
- (double)defaultTextLabelFontSizeForCell:;
- (void)getTextLabelRect:detailTextLabelRect:forCell:rowWidth:forSizing:;
- (id)defaultDetailTextLabelFontForCell:;
- (id)detailTextLabelForCell:;
- (id)intrinsicContentSizeForCell:rowWidth:;
- (void)layoutSubviewsOfCell:;
- (id)imageViewForCell:;
@end
