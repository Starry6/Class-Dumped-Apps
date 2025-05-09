@interface BWFigCaptureStream : NSObject
@property (nonatomic) ^{OpaqueFigCaptureStream=} figCaptureStream;
@property (nonatomic) NSString portType;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSDictionary supportedProperties;
@property (nonatomic) <BWFigCaptureStreamStartStopDelegate> startStopDelegate;
@property (nonatomic) BOOL calibrationDataSent;
@property (nonatomic) BOOL streaming;
- (id)portType;
- (BOOL)calibrationDataSent;
- (id)uniqueID;
- (void)dealloc;
- (void)synchronizedStreamsGroupDidStop;
- (void)flushPropertyCache;
- (int)setProperty:value:;
- (int)start;
- (id)getProperty:error:;
- (id)startStopDelegate;
- (int)stop;
- (int)setPropertyIfSupported:value:;
- (id)debugDescription;
- (int)addAttachmentsToSampleBuffer:options:;
- (id)figCaptureStream;
- (void)setCalibrationDataSent:;
- (id)supportedProperties;
- (int)registerForNotification:listener:callback:;
- (BOOL)streaming;
- (int)unregisterForNotification:listener:;
- (id)initWithFigCaptureStream:;
- (id)description;
- (void)synchronizedStreamsGroupWillStop;
- (id)copyProperty:error:;
- (void)setStartStopDelegate:;
- (id)getPropertyIfSupported:error:;
- (int)sendCommandProperty:;
- (void)invalidate;
- (id)copyPropertyIfSupported:error:;
@end
