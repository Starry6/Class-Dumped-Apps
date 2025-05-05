@interface HTSLiveCustomPanel : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) HTSLiveImage onlineImg;
@property (nonatomic) BOOL hasOnlineImg;
@property (nonatomic) HTSLiveImage reviewImg;
@property (nonatomic) BOOL hasReviewImg;
@property (nonatomic) NSString rejectReason;
+ (id)descriptor;
@end
