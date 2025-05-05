@interface CreateInfoResponse_CoverInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) NSInteger coverAuditStatus;
+ (id)descriptor;
@end
