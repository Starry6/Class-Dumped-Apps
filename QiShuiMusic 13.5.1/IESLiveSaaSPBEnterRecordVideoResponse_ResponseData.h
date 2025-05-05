@interface IESLiveSaaSPBEnterRecordVideoResponse_ResponseData : GPBMessage
@property (nonatomic) IESLiveSaaSPBEpisode episode;
@property (nonatomic) BOOL hasEpisode;
@property (nonatomic) IESLiveSaaSPBMoreHighlight more;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL vidIsValid;
@property (nonatomic) BOOL notReportPv;
+ (id)descriptor;
@end
