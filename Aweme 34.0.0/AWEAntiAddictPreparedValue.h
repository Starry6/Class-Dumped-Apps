@interface AWEAntiAddictPreparedValue : MTLModel
@property (nonatomic) @ value;
@property (nonatomic) BOOL expired;
@property (nonatomic) BOOL persistence;
@property (nonatomic) NSDateInterval validDateInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithValue:expired:persistence:;
- (void)setValidDateInterval:;
- (id)value;
- (void)setPersistence:;
- (BOOL)persistence;
- (void)setExpired:;
- (void)setValue:;
- (BOOL)expired;
- (void).cxx_destruct;
- (id)validDateInterval;
+ (id)preparedValueWithValue:expired:persistence:;
+ (id)preparedValueWithValue:validDateInterval:;
@end
