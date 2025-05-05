@interface SiriTTSOspreyStreamingPartialResponse : NSObject
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} asbd;
@property (nonatomic) NSData audioData;
@property (nonatomic) NSArray timingInfos;
- (void).cxx_destruct;
- (id)asbd;
- (void)setAsbd:;
- (id)initWithOspreyPartialResponse:;
- (id)audioData;
- (id)timingInfos;
+ (void)processServerLogs:;
@end
