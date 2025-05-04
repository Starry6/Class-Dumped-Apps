@interface AWEPlayletCollectionGuideManager : NSObject
@property (nonatomic) NSMutableArray collectPlaylets;
@property (nonatomic) NSMutableArray unCollectPlaylets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)collectionStatusChangedNoti:;
- (id)collectPlaylets;
- (id)unCollectPlaylets;
- (BOOL)hasAlreadyCollectionPlaylet:;
- (BOOL)hasAlreadyUnCollectionPlaylet:;
- (void)setCollectPlaylets:;
- (void)setUnCollectPlaylets:;
- (id)init;
- (void).cxx_destruct;
+ (void)updatePlayletWatchRecordForPlayletID:;
+ (void)cleanMissNumRecord;
+ (void)collectionButtonDidShowForModel:;
+ (void)collectionButtonDidClickForModel:;
+ (BOOL)hasShowPlayletCollectionGuideAboveMissLimit;
+ (BOOL)hasShowAboveLimitForPlaylet:;
+ (id)sharedManager;
+ (id)currentDateString;
@end
