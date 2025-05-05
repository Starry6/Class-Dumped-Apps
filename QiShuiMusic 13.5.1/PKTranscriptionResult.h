@interface PKTranscriptionResult : NSObject
@property (nonatomic) NSString transcription;
@property (nonatomic) BOOL didShowHUD;
- (void).cxx_destruct;
- (id)initWithTranscription:didShowHUD:;
- (id)transcription;
- (BOOL)didShowHUD;
@end
