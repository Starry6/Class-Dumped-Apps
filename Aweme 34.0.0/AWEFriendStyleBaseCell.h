@interface AWEFriendStyleBaseCell : UITableViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) BOOL isInsStyle;
- (id)initWithStyle:reuseIdentifier:isInsStyle:;
- (BOOL)isInsStyle;
- (void)setIsInsStyle:;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
+ (id)identifier;
@end
