@interface HTSLiveFeedbackCard_RoomCardStruct : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoom data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
+ (id)descriptor;
@end
