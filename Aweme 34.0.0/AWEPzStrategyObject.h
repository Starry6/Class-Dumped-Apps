@interface AWEPzStrategyObject : NSObject
@property (nonatomic) <AWEPzStrategyProtocol> strategy;
@property (nonatomic) NSString strategyID;
@property (nonatomic) NSString strategyType;
@property (nonatomic) q index;
@property (nonatomic) AWEPzStrategyConfig strategyConfig;
@property (nonatomic) BOOL needConsumePzDBRecord;
@property (nonatomic) BOOL canSubThreadExecute;
- (id)strategyConfig;
- (id)strategyID;
- (void)setStrategyConfig:;
- (id)strategyType;
- (BOOL)needConsumePzDBRecord;
- (BOOL)canSubThreadExecute;
- (void)setNeedConsumePzDBRecord:;
- (void)setCanSubThreadExecute:;
- (id)strategy;
- (long long)index;
- (id)description;
- (void).cxx_destruct;
- (void)setStrategy:;
@end
