@interface AVCaptureSessionConfiguration : NSObject
@property (nonatomic) q configurationID;
@property (nonatomic) NSArray inputs;
@property (nonatomic) NSArray outputs;
@property (nonatomic) NSHashTable videoPreviewLayers;
@property (nonatomic) NSArray connections;
- (long long)configurationID;
- (id)inputs;
- (id)connections;
- (id)initWithConfigurationID:inputs:outputs:videoPreviewLayers:connections:;
- (void)dealloc;
- (id)uniqueVideoPreviewLayers:;
- (id)uniqueOutputs:;
- (id)outputs;
- (id)uniqueConnections:;
- (id)uniqueInputs:;
- (id)videoPreviewLayers;
@end
