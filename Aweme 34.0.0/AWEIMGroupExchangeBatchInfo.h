@interface AWEIMGroupExchangeBatchInfo : NSObject
@property (nonatomic) NSString batchOwnerID;
@property (nonatomic) NSString batchID;
@property (nonatomic) NSString clientBatchID;
@property (nonatomic) q version;
@property (nonatomic) q batchEnterCount;
@property (nonatomic) Q status;
@property (nonatomic) double updateTime;
- (id)getContentDict;
- (long long)batchEnterCount;
- (void)setBatchEnterCount:;
- (id)batchOwnerID;
- (id)clientBatchID;
- (id)initWithExtDictionary:;
- (id)getExtContentDict;
- (void)setBatchOwnerID:;
- (void)setBatchID:;
- (void)setClientBatchID:;
- (void)setStatus:;
- (long long)version;
- (double)updateTime;
- (void)setVersion:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (BOOL)isEqual:;
- (id)initWithDictionary:;
- (void)setUpdateTime:;
- (id)batchID;
@end
