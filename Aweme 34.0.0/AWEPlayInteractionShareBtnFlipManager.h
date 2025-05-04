@interface AWEPlayInteractionShareBtnFlipManager : NSObject
@property (nonatomic) NSMutableDictionary recentAwemes;
@property (nonatomic) NSLock recentAwemesLock;
@property (nonatomic) NSObject<OS_dispatch_queue> recentAwemesWriteQueue;
- (void)updateRecentAweme:referString:;
- (id)handleEntranceLabelRequestActionMessage:;
- (id)handleEntranceLabelResultActionMessage:;
- (id)recentAwemes;
- (id)recentAwemesWriteQueue;
- (void)p_writeRecentAweme:referString:;
- (void)setRecentAwemes:;
- (id)recentAwemesLock;
- (void)setRecentAwemesLock:;
- (void)setRecentAwemesWriteQueue:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
