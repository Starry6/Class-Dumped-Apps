@interface IESECLiveTopVibeModel : MTLModel
@property (nonatomic) NSArray interactionVibes;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) NSString logID;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSString ttStable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)interactionVibes;
- (void)setInteractionVibes:;
- (void)setServerTime:;
- (void)setStatusMsg:;
- (void)setTtStable:;
- (id)statusMsg;
- (id)ttStable;
- (void)setStatusCode:;
- (id)statusCode;
- (void).cxx_destruct;
- (id)serverTime;
- (id)logID;
- (void)setLogID:;
+ (id)interactionVibesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
