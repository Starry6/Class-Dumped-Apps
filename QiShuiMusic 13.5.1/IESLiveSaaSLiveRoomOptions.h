@interface IESLiveSaaSLiveRoomOptions : MTLModel
@property (nonatomic) IESLiveSaaSLiveRoomQuality defaultQuality;
@property (nonatomic) NSArray qualities;
@property (nonatomic) BOOL vpassDefault;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)defaultQuality;
- (BOOL)vpassDefault;
- (void).cxx_destruct;
- (id)qualities;
+ (id)defaultQualityJSONTransformer;
+ (id)qualitiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
