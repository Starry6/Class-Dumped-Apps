@interface ZLZPhotinusEmulator : NSObject
@property (nonatomic) Q sequenceIndex;
@property (nonatomic) ZLZVideoWriter videoWriter;
@property (nonatomic) NSArray colorSequence;
@property (nonatomic) Q smoothTransition;
@property (nonatomic) Q colorIndex;
@property (nonatomic) q capturedIndex;
@property (nonatomic) BOOL canStart;
@property (nonatomic) NSURL metadataUrl;
@property (nonatomic) NSURL videoUrl;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSURL tempVideoUrl;
@property (nonatomic) ^v fileWriterFinishContext;
@property (nonatomic) NSMutableArray frameMetadataStorage;
@property (nonatomic) BOOL enableSmoothTransition;
@property (nonatomic) @? colorChangeHandler;
@property (nonatomic) @? errorHandler;
@property (nonatomic) BOOL filesReady;
@property (nonatomic) BOOL hasEnoughFrames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasEnoughFrames;
- (void)setMetadataUrl:;
- (long long)capturedIndex;
- (id)colorChangeHandler;
- (id)colorSequence;
- (void)dispenser:onSampleBufferAvailable:;
- (BOOL)enableSmoothTransition;
- (id)fileWriterFinishContext;
- (BOOL)filesReady;
- (id)frameMetadataStorage;
- (id)initWithVideoSize:withColorPattern:andPaddings:smoothTransition:enableSmooth:;
- (id)metadataUrl;
- (void)setCanStart:;
- (void)setCapturedIndex:;
- (void)setColorChangeHandler:;
- (void)setColorSequence:;
- (void)setEnableSmoothTransition:;
- (void)setFileWriterFinishContext:;
- (void)setFrameMetadataStorage:;
- (void)setSmoothTransition:;
- (void)setTempVideoUrl:;
- (unsigned long long)smoothTransition;
- (id)tempVideoUrl;
- (void)writeFrameMetadataToFile;
- (void)complete;
- (id)fileName;
- (void)dealloc;
- (id)errorHandler;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setErrorHandler:;
- (void).cxx_destruct;
- (void)setFileName:;
- (void)begin;
- (unsigned long long)sequenceIndex;
- (void)setSequenceIndex:;
- (id)videoUrl;
- (void)setVideoUrl:;
- (BOOL)canStart;
- (id)videoWriter;
- (void)setVideoWriter:;
- (unsigned long long)colorIndex;
- (void)setColorIndex:;
+ (id)appendGrayPadding:toColorSequence:;
+ (id)colorIndexLookup:;
+ (id)createDataNameWithIndex:;
+ (void)createWorkingDirectory;
+ (id)extractFrameMetadata:;
+ (id)lerpColor:withColor:betweenValue:;
+ (id)preparedSequenceForSmoothTransition:length:;
+ (void)removeWorkingDirectory;
+ (id)smoothTransitionOfSequence:length:;
+ (id)workingDirectory;
@end
