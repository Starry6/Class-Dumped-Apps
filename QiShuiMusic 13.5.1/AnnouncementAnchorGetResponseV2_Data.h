@interface AnnouncementAnchorGetResponseV2_Data : IESLivePBBaseMessage
@property (nonatomic) BOOL available;
@property (nonatomic) NSMutableArray allGroupListArray;
@property (nonatomic) Q allGroupListArray_Count;
@property (nonatomic) NSMutableArray appointmentListArray;
@property (nonatomic) Q appointmentListArray_Count;
@property (nonatomic) NSInteger banned;
@property (nonatomic) q banFinishTime;
@property (nonatomic) NSInteger banType;
+ (id)descriptor;
@end
