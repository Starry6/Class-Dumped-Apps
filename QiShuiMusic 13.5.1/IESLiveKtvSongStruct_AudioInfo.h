@interface IESLiveKtvSongStruct_AudioInfo : IESLivePBBaseMessage
@property (nonatomic) NSString URL;
@property (nonatomic) q songPatten;
@property (nonatomic) q audioId;
@property (nonatomic) double volumeLufs;
@property (nonatomic) double volumePeak;
@property (nonatomic) double bpm;
@property (nonatomic) NSString beatsPointURL;
@property (nonatomic) q createTime;
@property (nonatomic) NSString fileHash;
+ (id)descriptor;
@end
