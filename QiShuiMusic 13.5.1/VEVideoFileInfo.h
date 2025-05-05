@interface VEVideoFileInfo : IESMMObject
@property (nonatomic) ^{AVFormatContext=^{AVClass}Q^{AVInputFormat}^{AVOutputFormat}^v^{AVIOContext}iI^^{AVStream}[1024c]*qqqIiiqq*iI^^{AVProgram}iiiIII^^{AVChapter}^{AVDictionary}qii{AVIOInterruptCB=^?^vi}iqiiiiiiiiiiiqIiiii**^{AVFormatInternal}i^{AVCodec}^{AVCodec}^{AVCodec}^{AVCodec}i^v^?q*i^?*^?^?*i^viiqq} fmtContext;
@property (nonatomic) ^{AVStream=ii^{AVCodecContext}^v{AVFrac=qqq}{AVRational=ii}qqqii{AVRational=ii}^{AVDictionary}{AVRational=ii}{AVPacket=^{AVBufferRef}qq*iii^{AVPacketSideData}iqqq}^{AVPacketSideData}ii^{?}iqqqiiii^{AVCodecParserContext}^{AVPacketList}{AVProbeData=**i*}[17q]^{AVIndexEntry}iI{AVRational=ii}iqqiiiqqqiqqii[17q][17C]qCCi*{AVRational=ii}^{FFFrac}^{AVStreamInternal}^{AVCodecParameters}} videoStream;
@property (nonatomic) ^{AVStream=ii^{AVCodecContext}^v{AVFrac=qqq}{AVRational=ii}qqqii{AVRational=ii}^{AVDictionary}{AVRational=ii}{AVPacket=^{AVBufferRef}qq*iii^{AVPacketSideData}iqqq}^{AVPacketSideData}ii^{?}iqqqiiii^{AVCodecParserContext}^{AVPacketList}{AVProbeData=**i*}[17q]^{AVIndexEntry}iI{AVRational=ii}iqqiiiqqqiqqii[17q][17C]qCCi*{AVRational=ii}^{FFFrac}^{AVStreamInternal}^{AVCodecParameters}} audioStream;
@property (nonatomic) double videoStreamStartTime;
@property (nonatomic) double audioStreamStartTime;
- (id)findStreamInfo:;
- (double)audioStreamStartTime;
- (id)fetchAudioCodecParams;
- (BOOL)ffmpegInit:;
- (id)fmtContext;
- (id)parseMetadata;
- (void)setAudioStreamStartTime:;
- (void)setFmtContext:;
- (void)setVideoStreamStartTime:;
- (double)videoStreamStartTime;
- (void)dealloc;
- (void)setAudioStream:;
- (id)audioStream;
- (id)videoStream;
- (void)setVideoStream:;
- (id)initWithUrl:;
+ (void)printAVMetadata:;
@end
