@interface MLWrappedModel : MLModel
@property (nonatomic) MLModel innerModel;
@property (nonatomic) NSString reason;
- (id)parameterValueForKey:error:;
- (id)predictionsFromBatch:error:;
- (id)predictionFromFeatures:options:error:;
- (id)reason;
- (id)predictionsFromBatch:options:error:;
- (void)setReason:;
- (void).cxx_destruct;
- (id)predictionFromFeatures:error:;
- (id)initWithInnerModel:;
- (void)clearInnerModelWithReason:;
- (id)innerModel;
- (void)setInnerModel:;
@end
