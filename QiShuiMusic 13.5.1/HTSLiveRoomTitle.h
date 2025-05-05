@interface HTSLiveRoomTitle : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString introduction;
@property (nonatomic) q leftTag;
@property (nonatomic) NSString leftPeriod;
@property (nonatomic) NSString leftToast;
@property (nonatomic) HTSLiveTitleIcon leftIcon;
@property (nonatomic) BOOL hasLeftIcon;
+ (id)descriptor;
@end
