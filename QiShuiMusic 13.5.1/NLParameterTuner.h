@interface NLParameterTuner : NSObject
@property (nonatomic) NSArray parameters;
@property (nonatomic) NSArray parameterNames;
@property (nonatomic) NSDictionary options;
@property (nonatomic) <NLParameterTuningDelegate> delegate;
- (id)parameters;
- (id)options;
- (id)delegate;
- (id)parameterNames;
- (void).cxx_destruct;
- (id)initWithParameters:options:delegate:;
- (id)_hyperTuneParameterArray;
- (id)tunedParameterBundleWithError:;
+ (id)tunedParameterBundleWithParameters:options:delegate:error:;
+ (id)parameterTunerWithParameters:options:delegate:;
@end
