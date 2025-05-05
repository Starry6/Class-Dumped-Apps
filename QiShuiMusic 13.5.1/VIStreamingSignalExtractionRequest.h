@interface VIStreamingSignalExtractionRequest : NSObject
@property (nonatomic) NSUUID objectUUID;
@property (nonatomic) VIStreamingFrame highResolutionFrame;
@property (nonatomic) VIQueryContext queryContext;
- (id)queryContext;
- (void).cxx_destruct;
- (id)objectUUID;
- (id)initWithObjectUUID:highResolutionFrame:queryContext:;
- (id)highResolutionFrame;
@end
