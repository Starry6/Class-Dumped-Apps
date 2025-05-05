@interface IESLiveSaaSPBActionConfig : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString clickText;
@property (nonatomic) q actionType;
+ (id)descriptor;
@end
