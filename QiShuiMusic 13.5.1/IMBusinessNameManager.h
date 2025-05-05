@interface IMBusinessNameManager : NSObject
@property (nonatomic) NSLock cacheLock;
@property (nonatomic) NSMutableDictionary cache;
@property (nonatomic) NSMutableDictionary pendingRequests;
- (id)init;
- (void)setPendingRequests:;
- (id)cacheLock;
- (void)setCache:;
- (void)setCacheLock:;
- (void)_fetchBusinessNameForUID:;
- (void).cxx_destruct;
- (id)pendingRequests;
- (id)cache;
- (id)businessNameForUID:updateHandler:;
- (void)_fetchedBrandName:forUID:;
+ (id)sharedInstance;
+ (id)placeholderBusinessName;
@end
