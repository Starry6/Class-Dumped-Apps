@interface HTSLiveVideoPlayInfo_Url : IESLivePBBaseMessage
@property (nonatomic) NSString definition;
@property (nonatomic) NSString main;
@property (nonatomic) NSString backup;
@property (nonatomic) q height;
@property (nonatomic) q width;
+ (id)descriptor;
@end
