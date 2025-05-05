@interface HTSLivePreviewExposeData_ChatMessage : IESLivePBBaseMessage
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString nickNameColor;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
