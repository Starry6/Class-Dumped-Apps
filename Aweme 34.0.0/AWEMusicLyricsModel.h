@interface AWEMusicLyricsModel : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setText:;
- (void)encodeWithCoder:;
- (id)text;
- (id)description;
- (void).cxx_destruct;
- (double)startTime;
- (id)initWithCoder:;
@end
