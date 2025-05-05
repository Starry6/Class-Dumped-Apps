@interface HTSLiveUser_NobleLevelInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage nobleBackground;
@property (nonatomic) BOOL hasNobleBackground;
@property (nonatomic) q nobleLevel;
@property (nonatomic) HTSLiveImage nobleIcon;
@property (nonatomic) BOOL hasNobleIcon;
@property (nonatomic) NSString nobleName;
@property (nonatomic) q expireTime;
@property (nonatomic) HTSLiveImage nobleBigIcon;
@property (nonatomic) BOOL hasNobleBigIcon;
@property (nonatomic) HTSLiveImage nobleIconWithBack;
@property (nonatomic) BOOL hasNobleIconWithBack;
@property (nonatomic) HTSLiveImage nobleBoarder;
@property (nonatomic) BOOL hasNobleBoarder;
@property (nonatomic) NSMutableArray nobleBackgroundColorArray;
@property (nonatomic) Q nobleBackgroundColorArray_Count;
+ (id)descriptor;
@end
