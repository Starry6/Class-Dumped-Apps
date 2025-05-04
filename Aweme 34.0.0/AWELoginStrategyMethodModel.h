@interface AWELoginStrategyMethodModel : MTLModel
@property (nonatomic) NSDictionary loginSceneModelDict;
@property (nonatomic) AWELoginStrategyMethodExtraInfo extraInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)loginSceneModelDict;
- (void)setLoginSceneModelDict:;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)extraInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
