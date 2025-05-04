@interface AWELuckyCatPendantCountDownTask : MTLModel
@property (nonatomic) BOOL hasNext;
@property (nonatomic) q nextCycleTime;
@property (nonatomic) NSString nextToken;
@property (nonatomic) q nodeID;
@property (nonatomic) q nodeTime;
@property (nonatomic) q stopRefreshInterval;
@property (nonatomic) q interval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasNext:;
- (long long)nextCycleTime;
- (void)setNextCycleTime:;
- (void)setNextToken:;
- (long long)nodeTime;
- (void)setNodeTime:;
- (long long)stopRefreshInterval;
- (void)setStopRefreshInterval:;
- (long long)interval;
- (void)setInterval:;
- (long long)nodeID;
- (void).cxx_destruct;
- (void)setNodeID:;
- (id)nextToken;
- (BOOL)hasNext;
+ (id)JSONKeyPathsByPropertyKey;
@end
