@interface IESLiveSaaSLiveRoomCoreSDKData : MTLModel
@property (nonatomic) IESLiveSaaSLiveRoomPullData pullData;
@property (nonatomic) IESLiveSaaSLiveRoomPushData pushData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pullData;
- (void)setPullData:;
- (void)setPushData:;
- (void).cxx_destruct;
- (id)pushData;
+ (id)pullDataJSONTransformer;
+ (id)pushDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
