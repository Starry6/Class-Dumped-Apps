@interface IESLiveLinkmicMediaParam : IESLivePBBaseMessage
@property (nonatomic) NSInteger linkmicMediaType;
@property (nonatomic) NSInteger mediaInfoOneOfCase;
@property (nonatomic) IESLiveLinkmicMediaInfo linkmicMediaInfo;
@property (nonatomic) IESLiveKTVComponentMediaInfo ktvComponentMediaInfo;
@property (nonatomic) IESLiveUpdateMediaInfoNotify updateMediaInfoNotify;
@property (nonatomic) IESLivePersonalKaraokeMediaInfo personalKaraokeInfo;
@property (nonatomic) IESLiveLinkmicStreamInfo linkmicStreamInfo;
+ (id)descriptor;
@end
