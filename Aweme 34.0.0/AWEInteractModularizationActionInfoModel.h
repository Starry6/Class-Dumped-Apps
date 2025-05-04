@interface AWEInteractModularizationActionInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray actionList;
- (void).cxx_destruct;
- (id)actionList;
- (void)setActionList:;
+ (id)actionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
