@interface AWERTVLongVideoHistoryController : NSObject
@property (nonatomic) NSMutableDictionary watchHistory;
@property (nonatomic) NSLock lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)recordAweme:watchedProgress:;
- (void)recordAwemeID:watchedProgress:;
- (double)watchedProgressOfAweme:;
- (id)watchHistory;
- (void)setWatchHistory:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
@end
