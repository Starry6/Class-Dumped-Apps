@interface HTSLiveRoomActivityTag : IESLivePBBaseMessage
@property (nonatomic) NSInteger activityType;
@property (nonatomic) NSString name;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString extra;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
+ (id)descriptor;
@end
