@interface MSVLyricsElement : MSVLyricsXMLElement
@property (nonatomic) q type;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) MSVLyricsAgent agent;
- (void)setStartTime:;
- (void)setType:;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
- (long long)type;
- (void)setAgent:;
- (void).cxx_destruct;
- (id)agent;
- (id)description;
+ (id)_descriptionForElementType:;
@end
