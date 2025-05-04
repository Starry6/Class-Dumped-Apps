@interface AWEIMRecentShareDaysInfoModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString cid;
@property (nonatomic) q shareDayCount;
@property (nonatomic) q lastShareTimestamp;
- (id)secUid;
- (void)setSecUid:;
- (long long)shareDayCount;
- (long long)lastShareTimestamp;
- (void)setLastShareTimestamp:;
- (void)setShareDayCount:;
- (id)cid;
- (void)setUid:;
- (id)uid;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (id)toDictionary;
- (void)setCid:;
@end
