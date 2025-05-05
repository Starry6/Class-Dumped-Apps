@interface QLThumbnailView : UIView
@property (nonatomic) UIImage image;
@property (nonatomic) q pageNumber;
@property (nonatomic) BOOL alwaysVisible;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} unselectedFrame;
- (void)drawRect:;
- (void)setFrame:;
- (void)setImage:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)image;
- (long long)pageNumber;
- (void)setPageNumber:;
- (BOOL)alwaysVisible;
- (void)setAlwaysVisible:;
- (id)unselectedFrame;
- (void)setUnselectedFrame:;
@end
