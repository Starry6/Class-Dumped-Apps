@interface AWEAwemePoiCreatorEndorsementBarViewController : NSObject
@property (nonatomic) AWEAwemePoiCreatorEndorsementBottomBarViewController creatorEndorsementBottomBarViewController;
@property (nonatomic) AWEAwemePoiCreatorEndorsementBarViewContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (id)creatorEndorsementBottomBarViewController;
- (void)setCreatorEndorsementBottomBarViewController:;
- (void)dealloc;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (Class)contextClass;
- (id)bottomBarFrame;
- (id)bottomBarView;
@end
