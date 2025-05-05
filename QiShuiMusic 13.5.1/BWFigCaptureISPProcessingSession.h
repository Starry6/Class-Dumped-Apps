@interface BWFigCaptureISPProcessingSession : NSObject
@property (nonatomic) <BWFigCaptureISPProcessingSessionDelegate> delegate;
@property (nonatomic) NSDictionary supportedProperties;
@property (nonatomic) ^{OpaqueFigCaptureISPProcessingSession=} figCaptureISPProcessingSession;
- (void)dealloc;
- (int)setProperty:value:;
- (void)setDelegate:;
- (id)getProperty:error:;
- (id)figCaptureISPProcessingSession;
- (id)initWithFigCaptureISPProcessingSession:;
- (int)flush;
- (int)prepareWithHandler:;
- (id)delegate;
- (id)supportedProperties;
- (id)copyProperty:error:;
- (int)processBuffer:refCon:outputDescriptors:numOutputDescriptors:parameters:;
- (int)invalidate;
@end
