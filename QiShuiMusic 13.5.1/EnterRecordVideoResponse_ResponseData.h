@interface EnterRecordVideoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveEpisode episode;
@property (nonatomic) BOOL hasEpisode;
@property (nonatomic) HTSLiveMoreHighlight more;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL vidIsValid;
@property (nonatomic) BOOL notReportPv;
+ (id)descriptor;
@end
