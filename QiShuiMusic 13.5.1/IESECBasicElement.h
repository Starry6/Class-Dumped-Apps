@interface IESECBasicElement : MTLModel
@property (nonatomic) NSArray showEventList;
@property (nonatomic) IESECActionDefine action;
@property (nonatomic) NSString statusID;
@property (nonatomic) NSString currentState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowEventList:;
- (void)setStatusID:;
- (id)showEventList;
- (void)setCurrentState:;
- (id)currentState;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (id)statusID;
+ (id)showEventListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
