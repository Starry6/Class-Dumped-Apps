@interface CPLRampingRequest : PBRequest
@property (nonatomic) NSMutableArray requests;
- (id)requests;
- (void)setRequests:;
- (void)addRequest:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearRequests;
- (unsigned long long)requestsCount;
- (id)requestAtIndex:;
+ (Class)requestType;
@end
