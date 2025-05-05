@interface GetLinkedLiveRoomsResponse : IESLivePBBaseMessage
@property (nonatomic) LinkedLiveRoomsData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
