@interface WBSHistoryServiceTombstone : WBSHistoryServiceObject
@property (nonatomic) NSString url;
@property (nonatomic) NSData urlHash;
@property (nonatomic) NSData urlSalt;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) q generation;
- (id)url;
- (id)initWithCoder:;
- (double)startTime;
- (double)endTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)urlHash;
- (long long)generation;
- (id)initWithDatabaseID:url:urlHash:urlSalt:startTime:endTime:generation:;
- (id)initWithTombstone:;
- (id)urlSalt;
+ (BOOL)supportsSecureCoding;
@end
