@interface IESLiveLinkMicAudienceUserMicrophoneItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser orderUser;
@property (nonatomic) BOOL hasOrderUser;
@property (nonatomic) NSMutableArray microphoneListArray;
@property (nonatomic) Q microphoneListArray_Count;
@property (nonatomic) BOOL isSinging;
+ (id)descriptor;
@end
