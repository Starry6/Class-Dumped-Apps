@interface HTSLiveStreamVideoMeta : IESLivePBBaseMessage
@property (nonatomic) q streamId;
@property (nonatomic) HTSLiveStreamVideoMeta_StreamLocation startLocation;
@property (nonatomic) BOOL hasStartLocation;
@property (nonatomic) HTSLiveStreamVideoMeta_StreamLocation endLocation;
@property (nonatomic) BOOL hasEndLocation;
+ (id)descriptor;
@end
