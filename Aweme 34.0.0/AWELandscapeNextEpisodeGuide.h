@interface AWELandscapeNextEpisodeGuide : AWELandscapeBaseGuide
@property (nonatomic) AWELandScapeGuideView guideView;
@property (nonatomic) BOOL isFromLongVideo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (BOOL)isFromLongVideo;
- (id)initWithTargetView:isFromLongVideo:pageContext:;
- (void)setIsFromLongVideo:;
- (BOOL)show;
- (long long)priority;
- (id)identifier;
- (void)dismiss;
- (void).cxx_destruct;
- (id)guideView;
- (void)setGuideView:;
@end
