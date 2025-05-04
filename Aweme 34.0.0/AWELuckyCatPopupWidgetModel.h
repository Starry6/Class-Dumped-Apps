@interface AWELuckyCatPopupWidgetModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSDictionary dataDict;
@property (nonatomic) NSArray actionList;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtra:;
- (id)logExtra;
- (void)setDataDict:;
- (id)dataDict;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)actionList;
- (void)setActionList:;
+ (id)actionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
