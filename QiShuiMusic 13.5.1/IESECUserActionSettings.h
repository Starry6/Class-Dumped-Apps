@interface IESECUserActionSettings : MTLModel
@property (nonatomic) NSArray actionList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)actionList;
- (void)setActionList:;
+ (id)actionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
