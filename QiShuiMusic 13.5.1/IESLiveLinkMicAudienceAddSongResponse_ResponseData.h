@interface IESLiveLinkMicAudienceAddSongResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString prompt;
@property (nonatomic) NSString promptWithEarphone;
@property (nonatomic) GPBInt64Array succeedSongIdListArray;
@property (nonatomic) Q succeedSongIdListArray_Count;
@property (nonatomic) BOOL inSongWaitingList;
+ (id)descriptor;
@end
