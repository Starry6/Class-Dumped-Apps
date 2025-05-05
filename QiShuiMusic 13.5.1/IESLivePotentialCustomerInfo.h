@interface IESLivePotentialCustomerInfo : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSString subPanelJson;
+ (id)descriptor;
@end
