@interface AWEPredictPreloadStrategy : MTLModel
@property (nonatomic) NSNumber defaultValue;
@property (nonatomic) NSArray labelIndexMapping;
@property (nonatomic) NSArray plan;
@property (nonatomic) NSNumber actionCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)labelIndexMapping;
- (void)setLabelIndexMapping:;
- (id)defaultValue;
- (void)setDefaultValue:;
- (void)setPlan:;
- (id)plan;
- (void).cxx_destruct;
- (id)actionCount;
- (void)setActionCount:;
+ (id)planJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
