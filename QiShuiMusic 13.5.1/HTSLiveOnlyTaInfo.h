@interface HTSLiveOnlyTaInfo : IESLivePBBaseMessage
@property (nonatomic) NSString fullText;
@property (nonatomic) HTSLiveImage fullAvatar;
@property (nonatomic) BOOL hasFullAvatar;
@property (nonatomic) NSMutableArray tasArray;
@property (nonatomic) Q tasArray_Count;
+ (id)descriptor;
@end
