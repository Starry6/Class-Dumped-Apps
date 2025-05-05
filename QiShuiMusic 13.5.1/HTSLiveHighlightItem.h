@interface HTSLiveHighlightItem : IESLivePBBaseMessage
@property (nonatomic) q itemId;
@property (nonatomic) q version;
@property (nonatomic) q endTime;
@property (nonatomic) HTSLivePosition position;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) NSInteger dataType;
@property (nonatomic) HTSLiveHighlightDataCommonText commonText;
@property (nonatomic) BOOL hasCommonText;
@property (nonatomic) HTSLiveHighlightDataAppointment appointmentData;
@property (nonatomic) BOOL hasAppointmentData;
@property (nonatomic) HTSLiveHighlightDataAnswer answerData;
@property (nonatomic) BOOL hasAnswerData;
@property (nonatomic) HTSLiveHighlightDataComment commentData;
@property (nonatomic) BOOL hasCommentData;
@property (nonatomic) HTSLiveHighlightDataVideo videoData;
@property (nonatomic) BOOL hasVideoData;
@property (nonatomic) HTSLiveHighlightDataMicroApp microAppData;
@property (nonatomic) BOOL hasMicroAppData;
@property (nonatomic) HTSLiveHighlightDataImCommon imCommonData;
@property (nonatomic) BOOL hasImCommonData;
@property (nonatomic) HTSLiveHighlightDataCommonPictureText commonPictureTextData;
@property (nonatomic) BOOL hasCommonPictureTextData;
@property (nonatomic) NSMutableDictionary buriedPoint;
@property (nonatomic) Q buriedPoint_Count;
+ (id)descriptor;
@end
