@interface AWEIMActionInfoResponseModel : IESIMBaseApiModel
@property (nonatomic) q actionType;
@property (nonatomic) NSArray actionsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionsArray;
- (long long)actionType;
- (void).cxx_destruct;
+ (id)actionsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
