@interface AVCaptureFileOutputDelegateWrapper : NSObject
@property (nonatomic) q settingsID;
@property (nonatomic) NSURL outputFileURL;
@property (nonatomic) NSString outputFileType;
@property (nonatomic) NSArray metadata;
@property (nonatomic) AVWeakReferencingDelegateStorage delegateStorage;
@property (nonatomic) NSArray connections;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL paused;
- (id)connections;
- (void)dealloc;
- (id)metadata;
- (void)setOutputFileType:;
- (BOOL)isPaused;
- (id)outputFileType;
- (void)setMetadata:;
- (void)setPaused:;
- (id)delegateStorage;
- (long long)settingsID;
- (BOOL)isRecording;
- (void)setRecording:;
- (id)outputFileURL;
- (id)initWithURL:delegate:settingsID:connections:;
+ (id)wrapperWithURL:delegate:settingsID:connections:;
@end
