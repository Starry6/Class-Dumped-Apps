@interface AWELandscapeFeedScreenCastController : AWELandscapeFeedBaseController
@property (nonatomic) BOOL isAppeared;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)curSceneString;
- (void)setIsAppeared:;
- (id)screenCastVideoDelegate;
- (void)enterInnerListWithUpdateScreenCastDatas:;
- (void)updateScreenCastModels;
- (void)castPlayVideoDidChange:;
- (id)screenCastCurReferString;
- (BOOL)isScreenCastInLandscape;
- (void)castPlayVideoDidChangeFromModel:toModel:;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (BOOL)isAppeared;
@end
