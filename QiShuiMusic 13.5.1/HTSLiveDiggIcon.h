@interface HTSLiveDiggIcon : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) HTSLiveImage normalIconURL;
@property (nonatomic) BOOL hasNormalIconURL;
+ (id)descriptor;
@end
