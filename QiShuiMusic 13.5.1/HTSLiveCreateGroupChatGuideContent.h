@interface HTSLiveCreateGroupChatGuideContent : IESLivePBBaseMessage
@property (nonatomic) q anchorId;
@property (nonatomic) NSString headerText;
@property (nonatomic) NSString bodyText;
+ (id)descriptor;
@end
