@interface AnchorAudioResponse : IESLivePBBaseMessage
@property (nonatomic) AnchorAudioResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
