@interface HTSLiveMatchRoomImInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString title;
+ (id)descriptor;
@end
