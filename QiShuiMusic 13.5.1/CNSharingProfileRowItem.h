@interface CNSharingProfileRowItem : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) UIView accessoryView;
@property (nonatomic) BOOL isSelected;
- (id)label;
- (BOOL)isSelected;
- (id)accessoryView;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)initWithLabel:accessoryView:;
@end
