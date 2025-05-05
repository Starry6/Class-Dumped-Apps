@interface WBSHistoryTombstone : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString urlString;
@property (nonatomic) NSData urlHash;
@property (nonatomic) NSData urlSalt;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) q generation;
@property (nonatomic) BOOL secure;
- (BOOL)isSecure;
- (id)urlString;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (double)startTime;
- (double)endTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)urlHash;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)generation;
- (id)urlSalt;
- (id)initWithURLString:urlHash:urlSalt:startTime:endTime:generation:;
- (id)initWithSQLiteRow:crypto:;
- (BOOL)matchesVisitTime:urlString:;
- (id)secureTombstoneWithSalt:;
- (id)initWithStreamedTombstone:;
+ (BOOL)supportsSecureCoding;
@end
