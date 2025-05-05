@interface IESECLiveDynamicDecisionCenter : NSObject
@property (nonatomic) IESECLiveRoomContext roomContext;
@property (nonatomic) NSMutableDictionary dynamicInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDynamicInfo:;
- (void)setRoomContext:;
- (void)collectDynamicInfoWithName:data:;
- (id)getDecisionResultwithFactor:;
- (void)getDecisionResultwithFactor:completion:;
- (void)dealloc;
- (id)dynamicInfo;
- (void).cxx_destruct;
- (id)roomContext;
- (id)initWithRoomContext:;
@end
