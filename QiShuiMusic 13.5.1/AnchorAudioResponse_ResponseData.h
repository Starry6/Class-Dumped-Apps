@interface AnchorAudioResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) q textType;
@property (nonatomic) NSString content;
@property (nonatomic) NSString rtfContent;
@property (nonatomic) BOOL isToAll;
+ (id)descriptor;
@end
