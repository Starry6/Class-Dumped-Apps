@interface AWEPublishAggregationParamProvider : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramsForPublish:publishModel:;
- (id)paramsForPublishFinish:publishModel:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
