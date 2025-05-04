@interface AWEPzStrategyRegisterModel : NSObject
@property (nonatomic) # strategyClass;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL needConsumePzDBRecord;
@property (nonatomic) BOOL canSubThreadExecute;
- (Class)strategyClass;
- (void)setStrategyClass:;
- (BOOL)needConsumePzDBRecord;
- (BOOL)canSubThreadExecute;
- (void)setNeedConsumePzDBRecord:;
- (void)setCanSubThreadExecute:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
@end
