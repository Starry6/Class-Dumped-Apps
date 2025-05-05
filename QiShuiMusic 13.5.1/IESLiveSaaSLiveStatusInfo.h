@interface IESLiveSaaSLiveStatusInfo : BDDynamicMTLModel
@property (nonatomic) q liveStatus;
@property (nonatomic) IESLiveSaaSUserModel liveUser;
@property (nonatomic) NSString previewText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)liveUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
