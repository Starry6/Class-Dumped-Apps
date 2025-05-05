@interface MFComposeStyleSelectorButton : UIButton
@property (nonatomic) NSString maximumContentSizeCategory;
@property (nonatomic) q styleType;
- (void)_commonInit;
- (void)setSelected:;
- (id)initWithCoder:;
- (long long)styleType;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)maximumContentSizeCategory;
- (void)setMaximumContentSizeCategory:;
- (id)_imageForTextStyleType:maximumContentSizeCategory:;
+ (id)buttonWithStyleType:target:action:;
+ (id)buttonWithStyleType:target:action:maximumContentSizeCategory:;
@end
