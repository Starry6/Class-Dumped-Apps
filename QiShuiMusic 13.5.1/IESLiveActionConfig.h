@interface IESLiveActionConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString clickText;
@property (nonatomic) q actionType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) NSString actionName;
+ (id)descriptor;
@end
