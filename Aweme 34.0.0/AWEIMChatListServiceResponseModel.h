@interface AWEIMChatListServiceResponseModel : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) q reason;
@property (nonatomic) q serviceType;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray serviceListModels;
@property (nonatomic) NSError error;
@property (nonatomic) AWEIMChatListServiceExtTrackerModel trackerModel;
- (id)serviceListModels;
- (void)setServiceListModels:;
- (id)trackerModel;
- (void)setTrackerModel:;
- (void)setUid:;
- (id)uid;
- (void)setHasMore:;
- (void)setError:;
- (BOOL)hasMore;
- (void)setReason:;
- (id)description;
- (long long)serviceType;
- (void).cxx_destruct;
- (id)error;
- (void)setServiceType:;
- (long long)reason;
@end
