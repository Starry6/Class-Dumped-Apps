@interface HTSLiveRoomBasisData : IESLivePBBaseMessage
@property (nonatomic) q nextPing;
@property (nonatomic) BOOL isCustomizeAudioRoom;
+ (id)descriptor;
@end
