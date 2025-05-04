@interface AWESearchAIGCSugDataManager : NSObject
@property (nonatomic) <AWESearchAIGCSugDataManagerDelegate> delegate;
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSMutableArray sugDatas;
@property (nonatomic) BOOL isStarted;
- (void)startSugWithText:;
- (void)changeSugWithText:;
- (void)stopSug;
- (void)cleanSugDatasInSession;
- (id)allSugDatasInSession;
- (id)validSugTextWithOriginText:;
- (void)tryRefreshSugListWithSugData:;
- (id)sugDatas;
- (void)setSugDatas:;
- (void)setSessionID:;
- (BOOL)isStarted;
- (id)delegate;
- (id)initWithDelegate:;
- (id)sessionID;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setIsStarted:;
@end
