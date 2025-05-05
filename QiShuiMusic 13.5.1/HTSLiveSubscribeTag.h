@interface HTSLiveSubscribeTag : IESLivePBBaseMessage
@property (nonatomic) NSString dressId;
@property (nonatomic) NSString name;
@property (nonatomic) NSString content;
@property (nonatomic) q startTime;
@property (nonatomic) q priority;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
+ (id)descriptor;
@end
