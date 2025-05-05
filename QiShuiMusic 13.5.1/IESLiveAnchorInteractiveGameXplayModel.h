@interface IESLiveAnchorInteractiveGameXplayModel : IESLiveDynamicMTLModel
@property (nonatomic) NSString exeName;
@property (nonatomic) NSString version;
@property (nonatomic) IESLiveAnchorInteractiveGameXplayInfo xPlayGameInfo;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)xPlayGameInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
