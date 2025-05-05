@interface AXDataAnnotation : NSObject
@property (nonatomic) AXDataPoint location;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL playsHaptic;
@property (nonatomic) BOOL speakDuringPlayback;
- (id)initWithLocation:;
- (void)setLabel:;
- (id)label;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)initWithLocation:label:;
- (BOOL)playsHaptic;
- (void)setPlaysHaptic:;
- (BOOL)speakDuringPlayback;
- (void)setSpeakDuringPlayback:;
@end
