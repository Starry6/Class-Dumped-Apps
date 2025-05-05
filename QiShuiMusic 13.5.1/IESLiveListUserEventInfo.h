@interface IESLiveListUserEventInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger eventInfoType;
@property (nonatomic) HTSLiveText content;
@property (nonatomic) BOOL hasContent;
+ (id)descriptor;
@end
