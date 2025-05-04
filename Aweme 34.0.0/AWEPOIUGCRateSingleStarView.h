@interface AWEPOIUGCRateSingleStarView : UIView
@property (nonatomic) AWEPOITagRateGradeModel grade;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) UIImageView unselectedIcon;
@property (nonatomic) UIImageView selectedIcon;
- (id)selectedIcon;
- (void)setSelectedIcon:;
- (id)unselectedIcon;
- (void)setUnselectedIcon:;
- (void)preDownload;
- (id)initWithGrade:size:;
- (void)updateWtihUnselected:selected:animaiton:;
- (id)grade;
- (void)setGrade:;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
@end
