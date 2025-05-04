@interface AWEUGFCollectFollowTaskManager : NSObject
@property (nonatomic) AWEUGFCoinFollowTaskModel taskModel;
@property (nonatomic) NSString currentPendantID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskModel;
- (void)setTaskModel:;
- (void)trackLogWithKey:message:;
- (void)getNextTaskInfoDelayTime;
- (BOOL)isFeedTab;
- (void)trackFollowFCollectClick:;
- (void)startShowFeedFamiliarCard;
- (void)trackFollowFCollectShow:;
- (id)fcollectFollowTaskGoldImage;
- (void)taskFinishedWithGoldMount:followed:;
- (id)getCurrentPendantID;
- (void)dealGetTaskInfoData:error:;
- (void)getNextTaskInfo;
- (void)addTaskWithTopic:;
- (id)currentPendantID;
- (void)setCurrentPendantID:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
