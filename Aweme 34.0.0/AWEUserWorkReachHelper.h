@interface AWEUserWorkReachHelper : NSObject
@property (nonatomic) NSString cleanedReachKey;
@property (nonatomic) NSMutableArray cleanedReachArray;
@property (nonatomic) NSString reachItemID;
- (id)reachItemID;
- (void)setReachItemID:;
- (id)cleanedReachs;
- (void)clearCleanedReachs;
- (void)cacheCleanedReachWithItemID:;
- (void)setCleanedReachKey:;
- (id)cleanedReachKey;
- (void)setCleanedReachArray:;
- (id)cleanedReachArray;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
