@interface IESLiveExtraInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL enableTap;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString showEvent;
@property (nonatomic) NSMutableDictionary showEventParams;
@property (nonatomic) Q showEventParams_Count;
@property (nonatomic) NSString clickEvent;
@property (nonatomic) NSMutableDictionary clickEventParams;
@property (nonatomic) Q clickEventParams_Count;
@property (nonatomic) NSMutableDictionary globalShowEventParams;
@property (nonatomic) Q globalShowEventParams_Count;
@property (nonatomic) NSMutableDictionary globalClickEventParams;
@property (nonatomic) Q globalClickEventParams_Count;
@property (nonatomic) NSString extraMessage;
@property (nonatomic) BOOL disappearAfterTap;
+ (id)descriptor;
@end
