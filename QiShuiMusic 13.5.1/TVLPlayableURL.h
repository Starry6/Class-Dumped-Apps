@interface TVLPlayableURL : NSObject
@property (nonatomic) NSURLComponents URLComponents;
@property (nonatomic) TVLPlayerItem playerItem;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString playableString;
@property (nonatomic) TVLPlayerItemPreferences preferences;
@property (nonatomic) NSDictionary LLASHRepresentation;
@property (nonatomic) BOOL supportsTimeShift;
- (id)timeShiftFormat;
- (id)LLASHRepresentation;
- (id)generateURLWithCurrentStrategy:;
- (id)generateURLWithAdaptiveGopCache:abrPts:;
- (id)initWithURL:preferences:;
- (id)mediaProtocolToStr;
- (id)parsePlayableString:;
- (id)playableString;
- (BOOL)supportsTimeShift;
- (id)updateDefaultResolutionOfLLASHMPD:targetResolution:;
- (void)updateMPDToTargetResolution:;
- (id)initWithURL:;
- (id)preferences;
- (id)URLComponents;
- (id)playerItem;
- (void).cxx_destruct;
- (id)description;
- (id)URL;
- (void)setURLComponents:;
- (void)setPlayerItem:;
@end
