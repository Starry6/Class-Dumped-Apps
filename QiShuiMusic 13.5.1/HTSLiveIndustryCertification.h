@interface HTSLiveIndustryCertification : IESLivePBBaseMessage
@property (nonatomic) HTSLiveIndustryCertificationProfile profile;
@property (nonatomic) BOOL hasProfile;
@property (nonatomic) HTSLiveIndustryCertificationRoom room;
@property (nonatomic) BOOL hasRoom;
+ (id)descriptor;
@end
