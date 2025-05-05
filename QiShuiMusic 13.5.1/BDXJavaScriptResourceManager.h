@interface BDXJavaScriptResourceManager : NSObject
@property (nonatomic) NSString stopAudioScript;
@property (nonatomic) NSString observeTitleScript;
@property (nonatomic) NSString registerObserveTitleScript;
@property (nonatomic) NSString pauseAVScript;
@property (nonatomic) NSString disableImgCalloutScript;
- (id)stopAudioScript;
- (id)disableImgCalloutScript;
- (id)observeTitleScript;
- (id)pauseAVScript;
- (id)registerObserveTitleScript;
+ (id)sharedInstance;
@end
