@interface UITableViewCellContentMirror : UIView
@property (nonatomic) BOOL selected;
- (void)drawRect:;
- (void)setSelected:;
- (BOOL)isSelected;
- (id)initWithFrame:;
- (id)cell;
@end
