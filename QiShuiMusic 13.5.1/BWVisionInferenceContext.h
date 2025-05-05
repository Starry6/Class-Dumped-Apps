@interface BWVisionInferenceContext : NSObject
@property (nonatomic) VNSequenceRequestHandler sequenceRequestHandler;
@property (nonatomic) BOOL prepared;
- (int)prepareForInference;
- (id)init;
- (void)dealloc;
- (BOOL)isPrepared;
- (id)sequenceRequestHandler;
@end
