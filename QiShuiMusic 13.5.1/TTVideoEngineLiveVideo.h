@interface TTVideoEngineLiveVideo : NSObject
@property (nonatomic) NSMutableArray liveURLInfos;
@property (nonatomic) q backupStatus;
@property (nonatomic) q liveStatus;
@property (nonatomic) q status;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
- (id)allURLForVideoID:transformedURL:;
- (long long)backupStatus;
- (id)liveURLInfos;
- (void)setBackupStatus:;
- (void)setLiveStatus:;
- (void)setLiveURLInfos:;
- (void)setStatus:;
- (void)setStartTime:;
- (id)initWithDictionary:;
- (void)setEndTime:;
- (id)initWithCoder:;
- (long long)startTime;
- (long long)endTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (long long)liveStatus;
+ (BOOL)supportsSecureCoding;
@end
