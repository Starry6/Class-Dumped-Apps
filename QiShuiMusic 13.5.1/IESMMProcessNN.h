@interface IESMMProcessNN : NSObject
@property (nonatomic) ComnModel model;
@property (nonatomic) q outputType;
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) MLPredictionOptions options;
@property (nonatomic) NSMutableDictionary inFeatureDict;
@property (nonatomic) NSMutableDictionary outFeatureDict;
@property (nonatomic) MLDictionaryFeatureProvider outProvider;
@property (nonatomic) NSError error;
- (int)GetInputConfig:;
- (int)SetOutputBufferArr:data:format:;
- (long long)CopyBetweenPixelBuffers:destPixelBuffer:;
- (int)GetOutputConfig:;
- (int)SetInputPixelBuffer:data:;
- (void)setOutProvider:;
- (int)FindInputIndex:;
- (long long)CpuBufferPostProcess:;
- (int)FindOutputIndex:;
- (int)GetOutputBufferArr:;
- (int)Inference;
- (int)SetInputBufferArr:;
- (int)SetOutputPixelBuffer:data:;
- (int)checkTensorType:;
- (id)doDictPredictionWithOptions:error:;
- (long long)hwcTochwInputX:data:dataType:batch:height:width:channel:;
- (id)inFeatureDict;
- (id)initWithContent:withName:disableMLE5Engine:;
- (id)initWithURL:withName:disableMLE5Engine:;
- (id)outFeatureDict;
- (id)outProvider;
- (long long)outPutPostPocess;
- (int)parseDescription:;
- (void)setInFeatureDict:;
- (void)setOutFeatureDict:;
- (id)model;
- (void)setOptions:;
- (void)dealloc;
- (void)setModel:;
- (void)setError:;
- (id)error;
- (id)options;
- (id)modelDescription;
- (void).cxx_destruct;
- (id)init:;
- (id).cxx_construct;
- (void)setOutputType:;
- (long long)outputType;
- (void)setModelDescription:;
+ (BOOL)checkIfiOS16Lib;
+ (id)GetTensorShapes:;
+ (int)loadModelWithContent:withName:withType:completionHandler:;
+ (int)loadModelWithURL:withName:withType:completionHandler:;
+ (int)selectVaildKeys:withName:;
@end
