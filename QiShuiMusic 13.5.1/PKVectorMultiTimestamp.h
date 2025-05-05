@interface PKVectorMultiTimestamp : NSObject
@property (nonatomic) NSArray timestamps;
- (id)initWithTimestamps:;
- (unsigned long long)hash;
- (unsigned long long)compareTo:;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (id)timestamps;
- (id)sortedUUIDs;
- (void)mergeWithTimestamp:;
- (id)clockElementForUUID:atIndex:;
- (unsigned long long)clockForUUID:atIndex:;
- (void)setClock:forUUID:atIndex:;
- (void)setClock:subclock:forUUID:atIndex:;
- (void)saveToArchive:;
- (id)initWithData:andCapacity:;
- (id)initWithArchive:andCapacity:;
@end
