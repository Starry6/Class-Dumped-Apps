@interface HTSLiveKtvStreamSingSyncData : IESLivePBBaseMessage
@property (nonatomic) IESLiveKtvSongStruct song;
@property (nonatomic) BOOL hasSong;
@property (nonatomic) IESLiveKtvAtmosphereVideoInfo videoInfo;
@property (nonatomic) BOOL hasVideoInfo;
@property (nonatomic) q timeStamp;
@property (nonatomic) NSInteger action;
@property (nonatomic) IESLiveKTVMVInfo mvInfo;
@property (nonatomic) BOOL hasMvInfo;
+ (id)descriptor;
@end
