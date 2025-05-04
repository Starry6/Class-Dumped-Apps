@interface AWEIMGuideSelectionImageView : UIImageView
@property (nonatomic) UITapGestureRecognizer selectionTap;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) <AWEIMGuideSelectionImageViewDelegate> delegate;
- (void)changeSelected;
- (void)setSelectionTap:;
- (id)selectionTap;
- (void)setIsSelected:;
- (id)init;
- (id)delegate;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
@end
