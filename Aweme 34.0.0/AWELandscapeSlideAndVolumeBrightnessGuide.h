@interface AWELandscapeSlideAndVolumeBrightnessGuide : AWELandscapeBaseGuide
@property (nonatomic) AWELandScapeGuideView guideView;
@property (nonatomic) BOOL canSlide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (BOOL)canSlide;
- (void)setCanSlide:;
- (id)initWithTargetView:canSlid:pageContext:;
- (BOOL)canShowSlideGuide;
- (BOOL)show;
- (long long)priority;
- (id)identifier;
- (void)dismiss;
- (void).cxx_destruct;
- (id)guideView;
- (void)setGuideView:;
@end
