@interface GetAudioBGResponse : IESLivePBBaseMessage
@property (nonatomic) GetAudioBGResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
