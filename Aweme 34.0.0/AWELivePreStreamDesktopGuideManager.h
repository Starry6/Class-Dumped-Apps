@interface AWELivePreStreamDesktopGuideManager : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (BOOL)isFollow;
- (BOOL)isLiveTab;
- (id)createRequestModel;
- (void)canShowDesktopGuideWithSceneName:completion:;
- (void)setModel:;
- (void)dealloc;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
@end
