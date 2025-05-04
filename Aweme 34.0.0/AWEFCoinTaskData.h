@interface AWEFCoinTaskData : MTLModel
@property (nonatomic) BOOL hasNext;
@property (nonatomic) q nextCycleTime;
@property (nonatomic) NSString nextToken;
@property (nonatomic) q coinAmount;
@property (nonatomic) AWEFCoinTaskDataBubble bubble;
@property (nonatomic) BOOL pendantUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasNext:;
- (long long)nextCycleTime;
- (void)setNextCycleTime:;
- (void)setNextToken:;
- (long long)coinAmount;
- (void)setCoinAmount:;
- (BOOL)pendantUpdate;
- (void)setPendantUpdate:;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:;
- (id)nextToken;
- (BOOL)hasNext;
+ (id)JSONKeyPathsByPropertyKey;
@end
