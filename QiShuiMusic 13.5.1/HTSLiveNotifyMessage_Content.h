@interface HTSLiveNotifyMessage_Content : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) BOOL needHighLight;
+ (id)descriptor;
@end
