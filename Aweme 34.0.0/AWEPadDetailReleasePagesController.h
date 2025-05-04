@interface AWEPadDetailReleasePagesController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL hasReleasePages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasReleasePages;
- (void)setHasReleasePages:;
- (id)aAWEPadReleasePagesAdapter;
- (void)releaseMiddlePages;
- (void)trackReleaseMiddlePages:;
- (void)updateDataControllerIfNeeded;
- (void)viewDidAppear;
- (void)viewDidDisappear;
+ (Class)aAWEPadReleasePagesAdapterClass;
@end
