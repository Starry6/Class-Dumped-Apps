@interface OBTextBulletedListItem : OBBulletedListItem
- (double)imageSizeForImage:;
- (id)initWithTitle:description:image:accessoryButton:;
- (BOOL)shouldLayoutVertically;
- (double)leadingMargins;
- (double)trailingMargins;
@end
