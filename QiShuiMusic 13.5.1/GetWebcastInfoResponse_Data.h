@interface GetWebcastInfoResponse_Data : IESLivePBBaseMessage
@property (nonatomic) GetWebcastInfoResponse_WebcastInfo info;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) AnchorLinkerInfo linkerInfo;
@property (nonatomic) BOOL hasLinkerInfo;
+ (id)descriptor;
@end
