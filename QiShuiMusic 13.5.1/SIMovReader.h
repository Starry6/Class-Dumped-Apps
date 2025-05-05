@interface SIMovReader : NSObject
@property (nonatomic) MOVStreamReader reader;
- (void).cxx_destruct;
- (id)reader;
- (void)setReader:;
- (id)initReaderWithVideoURL:andTrackName:;
- (id)readFrame:;
@end
