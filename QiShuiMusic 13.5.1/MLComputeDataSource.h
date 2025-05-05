@interface MLComputeDataSource : NSObject
@property (nonatomic) NSDictionary dataDictionary;
- (void).cxx_destruct;
- (id)dataDictionary;
- (id)initWithFeatureProvider:forPrediction:neuralNetworkEngine:error:;
- (id)dataCHWFromPixelBuffer:channelOrderIsBGR:error:;
- (id)dataCHWFromPixelTypeGray8:error:;
- (id)dataCHWFromChanneledPixelType:channelOrderIsBGR:error:;
- (id)oneHotEncodedDataFromFeatureValue:withNNEngine:error:;
@end
