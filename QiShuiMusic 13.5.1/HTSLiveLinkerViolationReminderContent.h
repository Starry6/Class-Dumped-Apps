@interface HTSLiveLinkerViolationReminderContent : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
