@interface AWEPadFeedVideoPlayManager : NSObject
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) NSString firstLandscapeItemId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)videoDidChangeTo:;
- (id)firstLandscapeItemId;
- (void)setFirstLandscapeItemId:;
- (void)didEnterLandscapeWithItem:;
- (void)didQuitLandscape;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setCurrentModel:;
+ (id)sharedInstance;
@end
