@interface PIASnapShotModel : NSObject
@property (nonatomic) q sdk;
@property (nonatomic) q expires;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL enforce;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString head;
@property (nonatomic) NSString content;
@property (nonatomic) NSString version;
@property (nonatomic) NSString queryString;
@property (nonatomic) NSArray sortedQueryKey;
@property (nonatomic) NSDictionary queryDictionary;
- (BOOL)enforce;
- (long long)sdk;
- (void)setSdk:;
- (id)queryJSONWithObject:;
- (id)removeSnapshotComment:;
- (void)setEnforce:;
- (void)setSortedQueryKey:;
- (id)sortedQueryKey;
- (id)sortedQueryKeyWithQueryString:;
- (void)setHead:;
- (id)head;
- (id)content;
- (void)setContent:;
- (id)init;
- (void)setVersion:;
- (id)version;
- (double)createTime;
- (id)initWithDictionary:;
- (long long)expires;
- (void)setQueryString:;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (void)setExpires:;
- (void)setURL:;
- (id)URL;
- (id)queryString;
- (id)queryDictionary;
- (void)setQueryDictionary:;
@end
