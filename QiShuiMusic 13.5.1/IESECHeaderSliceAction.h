@interface IESECHeaderSliceAction : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary fields;
@property (nonatomic) NSArray actions;
@property (nonatomic) BOOL disable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDisable:;
- (BOOL)disable;
- (void)setFields:;
- (void)setActions:;
- (void)setType:;
- (id)fields;
- (id)type;
- (id)actions;
- (void).cxx_destruct;
+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
