@interface IESECLogisticLine : MTLModel
@property (nonatomic) NSArray logisticItems;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSNumber type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpURL;
- (id)logisticItems;
- (void)setJumpURL:;
- (void)setLogisticItems:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
+ (id)logisticItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
