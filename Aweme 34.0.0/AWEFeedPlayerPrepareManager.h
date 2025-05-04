@interface AWEFeedPlayerPrepareManager : NSObject
@property (nonatomic) AWEAwemeModel preparedModel;
@property (nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> preparedPlayer;
@property (nonatomic) NSMutableDictionary preparedDict;
- (BOOL)preparePlayerWithModel:;
- (id)matchPreparedPlayerWithModel:;
- (BOOL)preparePlayerWithReferString:awemeModel:;
- (void)stopPrepareIfNeedWithReferString:;
- (id)matchInitialPreparedPlayerWithReferString:awemeModel:;
- (BOOL)checkFeedModel:;
- (void)setPreparedModel:;
- (void)setPreparedPlayer:;
- (BOOL)matchModel:;
- (id)preparedPlayer;
- (void)resetWithStop:;
- (BOOL)checkModel:;
- (id)preparedDict;
- (id)preparedModel;
- (void)setPreparedDict:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
