@interface BWFigCaptureSynchronizedStreamsGroup : NSObject
@property (nonatomic) NSDictionary supportedProperties;
@property (nonatomic) NSArray streams;
@property (nonatomic) BWFigCaptureStream synchronizationMaster;
@property (nonatomic) BOOL stopSupported;
- (int)setActiveStreams:;
- (void)dealloc;
- (int)setProperty:value:;
- (id)getProperty:error:;
- (BOOL)stopSupported;
- (int)setCameraControlsMasterStream:;
- (int)stop;
- (int)setMasterStream:slaveConfigurationsByPortType:;
- (id)synchronizationMaster;
- (id)figCaptureSynchronizedStreamsGroup;
- (id)supportedProperties;
- (id)copyProperty:error:;
- (id)initWithFigCaptureSynchronizedStreamsGroup:captureDevice:;
- (id)streams;
- (void)invalidate;
- (id)activeStreams;
@end
