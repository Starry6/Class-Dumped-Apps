@interface LinkedLiveRoomsData : IESLivePBBaseMessage
@property (nonatomic) NSString entryText;
@property (nonatomic) NSString entryTitleText;
@property (nonatomic) NSString entrySubTitleText;
@property (nonatomic) NSMutableArray linkedLiveRoomsArray;
@property (nonatomic) Q linkedLiveRoomsArray_Count;
@property (nonatomic) NSString entryMultiCameraTitleText;
@property (nonatomic) NSString entryLinkedRoomTitleText;
+ (id)descriptor;
@end
