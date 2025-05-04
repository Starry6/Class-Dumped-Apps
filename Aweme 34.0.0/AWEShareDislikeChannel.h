@interface AWEShareDislikeChannel : AWEShareBaseChannel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareWithCompletion:;
- (id)shareImage;
- (id)makeItemWithStyle:inView:;
- (void)checkTargetIndexWithContext:;
- (BOOL)shouldShowFamiliarDislikeWithContext:;
- (BOOL)shouldShowRelatedRecommendDislikeWithContext:;
- (void)trackRelatedRecommendDislikeClicked:;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
