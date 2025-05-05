@interface IESLiveLinkMicAudienceGetOrderedSongListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray listInfoArray;
@property (nonatomic) Q listInfoArray_Count;
@property (nonatomic) q wantSingCount;
@property (nonatomic) q wantSingSongThreshold;
@property (nonatomic) q displayChallengeCardThreshold;
@property (nonatomic) q sungSongCount;
@property (nonatomic) HTSLiveMultiChorusSongListItem multiChorusSongListItem;
@property (nonatomic) BOOL hasMultiChorusSongListItem;
+ (id)descriptor;
@end
