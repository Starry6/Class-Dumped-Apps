@interface AWEDiversionTimerInfo : MTLModel
@property (nonatomic) AWEDiversionTimerModel info;
@property (nonatomic) NSString crossToken;
@property (nonatomic) double currentWatchedTime;
@property (nonatomic) double lastWatchedTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)crossToken;
- (void)setCrossToken:;
- (double)currentWatchedTime;
- (void)setCurrentWatchedTime:;
- (double)lastWatchedTime;
- (void)setLastWatchedTime:;
- (void)setInfo:;
- (id)info;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
