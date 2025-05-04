@interface AWEHeatFlowInfo : MTLModel
@property (nonatomic) Q awardAccessStatus;
@property (nonatomic) q flowCountAvailable;
@property (nonatomic) q flowValidStartTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAwardAccessStatus:;
- (void)setFlowCountAvailable:;
- (unsigned long long)awardAccessStatus;
- (long long)flowValidStartTimestamp;
- (long long)flowCountAvailable;
- (void)setFlowValidStartTimestamp:;
+ (id)JSONKeyPathsByPropertyKey;
@end
