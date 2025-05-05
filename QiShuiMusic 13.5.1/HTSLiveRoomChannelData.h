@interface HTSLiveRoomChannelData : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) NSMutableArray channelListArray;
@property (nonatomic) Q channelListArray_Count;
@property (nonatomic) NSInteger supportRoomChannelMode;
@property (nonatomic) NSInteger limitOfNum;
@property (nonatomic) BOOL canCreate;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) BOOL hideLandscape;
+ (id)descriptor;
@end
