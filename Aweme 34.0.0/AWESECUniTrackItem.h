@interface AWESECUniTrackItem : AWESECTrackItem
@property (nonatomic) NSString eventType;
@property (nonatomic) NSDictionary eventParams;
@property (nonatomic) Q sampleRate;
- (void)setEventParams:;
- (unsigned long long)trackerType;
- (id)uniParams;
- (void)setEventType:;
- (unsigned long long)sampleRate;
- (id)eventType;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)eventName;
- (id)initWithCoder:;
- (void)setSampleRate:;
- (id)eventParams;
- (id)allParams;
@end
