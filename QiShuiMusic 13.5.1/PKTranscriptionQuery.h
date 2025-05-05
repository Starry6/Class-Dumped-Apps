@interface PKTranscriptionQuery : PKQuery
@property (nonatomic) CHTranscriptionQuery transcriptionQuery;
@property (nonatomic) NSString transcription;
- (void)dealloc;
- (void)teardown;
- (void)start;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithRecognitionSessionManager:;
- (id)transcription;
- (id)contextualTextResultsForContextStrokes:completion:shouldCancel:;
- (id)transcriptionQuery;
- (void)setTranscriptionQuery:;
@end
