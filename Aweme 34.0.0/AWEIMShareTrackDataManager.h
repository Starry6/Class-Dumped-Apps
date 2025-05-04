@interface AWEIMShareTrackDataManager : NSObject
@property (nonatomic) NSMutableDictionary indexDict;
@property (nonatomic) NSMutableDictionary recentTalkDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSelectShareID:forOrder:;
- (void)removeAllOrder;
- (unsigned long long)orderOfShareID:;
- (void)removeOrderOfShareID:;
- (unsigned long long)recentTalkOrderOfShareID:;
- (void)removeRecentTalkOrderOfShareID:;
- (void)markShareID:forRecentTalkOrder:;
- (id)indexDict;
- (id)recentTalkDict;
- (void)removeAllRecentTalkOrder;
- (void)setIndexDict:;
- (void)setRecentTalkDict:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
