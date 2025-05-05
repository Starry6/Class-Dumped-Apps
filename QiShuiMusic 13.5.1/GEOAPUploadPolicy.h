@interface GEOAPUploadPolicy : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL sendImmediately;
@property (nonatomic) double ttl;
@property (nonatomic) NSArray uploadStages;
- (void)setType:;
- (void)setSendImmediately:;
- (void)setUploadStages:;
- (int)type;
- (id)uploadStages;
- (void).cxx_destruct;
- (void)setTtl:;
- (double)ttl;
- (BOOL)sendImmediately;
@end
