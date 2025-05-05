@interface HTSLiveStreamUrl_StreamUrlExtra_SuperResolution : IESLivePBBaseMessage
@property (nonatomic) BOOL enable;
@property (nonatomic) q strength;
@property (nonatomic) BOOL antialiasing;
+ (id)descriptor;
@end
