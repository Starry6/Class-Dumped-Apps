@interface VoiceVerificationEndpointer : NSObject
@property (nonatomic) NSInteger endpointMode;
@property (nonatomic) double startWaitTime;
@property (nonatomic) double interspeechWaitTime;
@property (nonatomic) double endWaitTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)startWaitTime;
- (double)endWaitTime;
- (int)endpointMode;
- (void)setEndWaitTime:;
- (double)interspeechWaitTime;
- (void)setStartWaitTime:;
- (void)setEndpointMode:;
- (id)init;
- (void)setInterspeechWaitTime:;
- (void)dealloc;
- (void)reset;
- (int)getStatus:;
- (BOOL)configureWithSampleRate:andFrameRate:;
- (BOOL)configureWithASBD:andFrameRate:;
@end
