@interface AWESearchTabPopoverViewConfig : NSObject
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL showArrow;
@property (nonatomic) UIColor bgColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIFont textFont;
- (BOOL)showArrow;
- (void)setShowArrow:;
- (void)setIconURL:;
- (id)textFont;
- (id)iconURL;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setTextFont:;
- (id)bgColor;
- (void)setBgColor:;
@end
