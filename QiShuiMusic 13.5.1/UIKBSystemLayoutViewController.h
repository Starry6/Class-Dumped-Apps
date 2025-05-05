@interface UIKBSystemLayoutViewController : UIViewController
@property (nonatomic) Q horizontalLayoutType;
@property (nonatomic) Q verticalLayoutType;
@property (nonatomic) {UIEdgeInsets=dddd} minimumInsets;
@property (nonatomic) {CGSize=dd} centeredOffsets;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)setHorizontalLayoutType:;
- (void)setVerticalLayoutType:;
- (void)setMinimumInsets:;
- (void)setCenteredOffsets:;
- (unsigned long long)horizontalLayoutType;
- (unsigned long long)verticalLayoutType;
- (id)minimumInsets;
- (id)centeredOffsets;
+ (id)systemLayoutViewControllerWithViewController:;
@end
