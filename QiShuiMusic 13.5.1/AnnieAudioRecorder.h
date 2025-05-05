@interface AnnieAudioRecorder : NSObject
@property (nonatomic) <AnnieAudioRecorderProviderDelegate> delegate;
@property (nonatomic) PuzzleContext context;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callBackDidOccurOSErrorWithCode:;
- (BOOL)startRecord;
- (void)stopRecord;
- (id)context;
- (void)setDelegate:;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContext:;
- (BOOL)prepareToRecord;
@end
