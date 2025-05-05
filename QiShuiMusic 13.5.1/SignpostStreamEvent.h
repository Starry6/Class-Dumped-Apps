@interface SignpostStreamEvent : SignpostEvent
@property (nonatomic) Q _totalFrameCount;
@property (nonatomic) NSObject<OS_dispatch_source> timeoutSource;
@property (nonatomic) Q serialNumber;
- (unsigned long long)serialNumber;
- (void)setSerialNumber:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithIsHumanReadable:shouldRedact:;
- (BOOL)_hasTotalFrames;
- (unsigned long long)_totalFrameCount;
- (void)set_totalFrameCount:;
- (id)timeoutSource;
- (void)setTimeoutSource:;
+ (id)serializationTypeNumber;
@end
