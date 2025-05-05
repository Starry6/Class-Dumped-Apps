@interface AFInterstitialProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithStyle:recordRoute:isVoiceTrigger:isDucking:isTwoShot:speechEndHostTime:context:preferences:delegate:;
- (id)initWithStyle:recordRoute:isVoiceTrigger:isDucking:isTwoShot:speechEndHostTime:context:delegate:;
- (void)_performNextActionWithExpectedDelay:;
@end
