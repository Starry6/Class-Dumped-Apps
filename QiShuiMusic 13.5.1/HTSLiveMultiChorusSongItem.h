@interface HTSLiveMultiChorusSongItem : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array userIdsArray;
@property (nonatomic) Q userIdsArray_Count;
@property (nonatomic) BOOL isJoined;
+ (id)descriptor;
@end
