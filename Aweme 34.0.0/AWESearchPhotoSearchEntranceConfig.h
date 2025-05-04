@interface AWESearchPhotoSearchEntranceConfig : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) UIImage image;
@property (nonatomic) UIView target;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) {UIEdgeInsets=dddd} imageEdgeInsets;
@property (nonatomic) {UIEdgeInsets=dddd} titleEdgeInsets;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) {CGPoint=dd} targetPoint;
- (id)target;
- (id)init;
- (id)image;
- (id)imageEdgeInsets;
- (void)setImage:;
- (void)setImageEdgeInsets:;
- (void)setTarget:;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)title;
- (id)imageSize;
- (void)setTitle:;
- (void)setTargetPoint:;
- (id)titleEdgeInsets;
- (void)setTitleEdgeInsets:;
- (id)targetPoint;
- (double)imageCornerRadius;
- (void)setImageCornerRadius:;
@end
