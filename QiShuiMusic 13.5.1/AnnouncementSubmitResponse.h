@interface AnnouncementSubmitResponse : IESLivePBBaseMessage
@property (nonatomic) AnnouncementSubmitResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
