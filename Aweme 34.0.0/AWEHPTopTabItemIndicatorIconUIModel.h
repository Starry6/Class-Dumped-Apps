@interface AWEHPTopTabItemIndicatorIconUIModel : NSObject
@property (nonatomic) double distance;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) BOOL inRight;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL rotation;
@property (nonatomic) BOOL adjustTint;
@property (nonatomic) UIImage selectedImage;
@property (nonatomic) UIImage unselectedImage;
- (BOOL)inRight;
- (void)setInRight:;
- (BOOL)adjustTint;
- (void)setAdjustTint:;
- (void)setDistance:;
- (void)setAlpha:;
- (double)distance;
- (BOOL)rotation;
- (void)setRotation:;
- (double)alpha;
- (void)setSelectedImage:;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)selectedImage;
- (id)unselectedImage;
- (void)setUnselectedImage:;
@end
