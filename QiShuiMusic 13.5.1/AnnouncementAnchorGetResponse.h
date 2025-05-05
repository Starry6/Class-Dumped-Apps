@interface AnnouncementAnchorGetResponse : IESLivePBBaseMessage
@property (nonatomic) AnnouncementAnchorGetResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) NSMutableArray dataListArray;
@property (nonatomic) Q dataListArray_Count;
+ (id)descriptor;
@end
