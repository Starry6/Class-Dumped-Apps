@interface AWEEvaluationDataModel : MTLModel
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString measurement;
@property (nonatomic) double groupPercent;
@property (nonatomic) NSArray samples;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)groupPercent;
- (void)setGroupPercent:;
- (void)setGroupName:;
- (void)setSamples:;
- (id)samples;
- (id)groupName;
- (void).cxx_destruct;
- (void)setMeasurement:;
- (id)measurement;
+ (id)samplesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
