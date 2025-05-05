@interface NSPersistentHistoryChangeRequestToken : NSObject
@property (nonatomic) NSData fetchData;
@property (nonatomic) NSDictionary token;
@property (nonatomic) NSDate date;
@property (nonatomic) q resultType;
@property (nonatomic) BOOL delete;
@property (nonatomic) BOOL transactionFromToken;
@property (nonatomic) Q fetchLimit;
@property (nonatomic) Q fetchOffset;
@property (nonatomic) Q fetchBatchSize;
@property (nonatomic) Q percentageOfDB;
- (unsigned long long)fetchOffset;
- (unsigned long long)fetchLimit;
- (unsigned long long)fetchBatchSize;
- (BOOL)delete;
- (void)dealloc;
- (id)token;
- (unsigned long long)percentageOfDB;
- (id)initWithCoder:;
- (long long)resultType;
- (id)date;
- (void)encodeWithCoder:;
- (id)initForRequest:;
- (BOOL)transactionFromToken;
- (id)fetchData;
+ (BOOL)supportsSecureCoding;
@end
