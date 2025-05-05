@interface CNPhotoPickerActionsViewControllerLayout : NSObject
@property (nonatomic) {CGSize=dd} containerSize;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) q buttonCount;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} actionButtonsViewFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} imageContainerViewFrame;
- (id)edgeInsets;
- (id)containerSize;
- (long long)buttonCount;
- (id)actionButtonsViewFrame;
- (id)imageContainerViewFrame;
- (id)initWithContainerSize:insets:buttonCount:;
- (id)actionButtonsViewFrameForButtonCount:;
+ (double)buttonHeight;
+ (double)heightForButtonsViewWithButtonCount:;
@end
