@interface MEMailComposeToolbarItemInfo : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSString tooltip;
@property (nonatomic) UIImage image;
- (void)setImage:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)image;
- (id)initWithLabel:image:tooltip:;
- (id)tooltip;
- (void)setTooltip:;
@end
