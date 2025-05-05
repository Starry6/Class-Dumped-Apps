@interface SilenceListResponse : IESLivePBBaseMessage
@property (nonatomic) SilenceListResponse_ResponseExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
