@interface AWESearchFeedVideoPlayAddrUriRecorder : NSObject
@property (nonatomic) NSMutableDictionary cache;
- (void)recordPlayAddrUriForModel:;
- (id)playAddrUriForItemId:;
- (void)setCache:;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
