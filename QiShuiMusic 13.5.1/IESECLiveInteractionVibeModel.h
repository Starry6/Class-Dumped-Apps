@interface IESECLiveInteractionVibeModel : MTLModel
@property (nonatomic) NSNumber priority;
@property (nonatomic) NSNumber loopCount;
@property (nonatomic) NSArray content;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) IESECLiveInteractionVibeCheckModel checkValid;
@property (nonatomic) q showedTimes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowedTimes:;
- (void)setTrackParams:;
- (id)checkValid;
- (void)setCheckValid:;
- (long long)showedTimes;
- (id)trackParams;
- (void)updateWithInteractionData:;
- (id)content;
- (void)setContent:;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)priority;
- (id)loopCount;
- (void)setLoopCount:;
+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
