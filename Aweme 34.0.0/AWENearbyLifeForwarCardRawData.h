@interface AWENearbyLifeForwarCardRawData : MTLModel
@property (nonatomic) NSString cardRawData;
@property (nonatomic) AWENearbyResourceOfFrequencyInfo frequencyData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)frequencyData;
- (void)setFrequencyData:;
- (id)cardRawData;
- (void)setCardRawData:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)frequencyDataJSONTransformer;
@end
