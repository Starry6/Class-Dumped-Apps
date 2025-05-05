@interface RUIVariableHeightCell : RemoteUITableViewCell
@property (nonatomic) BOOL supportsAccessory;
@property (nonatomic) q detailTextAlignment;
- (void)layoutSubviews;
- (double)height;
- (id)sizeForTextLabel:width:;
- (BOOL)supportsAccessory;
- (void)setSupportsAccessory:;
- (long long)detailTextAlignment;
- (void)setDetailTextAlignment:;
@end
