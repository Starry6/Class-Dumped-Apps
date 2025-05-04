@interface AWEAntiAddictStrategyValue : MTLModel
@property (nonatomic) @ value;
@property (nonatomic) NSDate validDate;
@property (nonatomic) NSDateInterval validDateInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setValidDate:;
- (void)setValidDateInterval:;
- (id)initWithValue:validDateInterval:;
- (id)initWithValue:validDate:;
- (id)value;
- (void)setValue:;
- (void).cxx_destruct;
- (id)validDate;
- (id)validDateInterval;
@end
