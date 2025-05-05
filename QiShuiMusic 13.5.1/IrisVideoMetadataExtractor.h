@interface IrisVideoMetadataExtractor : NSObject
@property (nonatomic) AVAsset inMovieAsset;
@property (nonatomic) NSMutableArray desiredIrisKeysArray;
@property (nonatomic) NSArray framesMetadataArray;
@property (nonatomic) NSMutableDictionary videoTrackMetadataDict;
@property (nonatomic) BOOL processedFile;
@property (nonatomic) BOOL saveAllMetadata;
@property (nonatomic) NSDictionary allMetadata;
- (id)init;
- (void).cxx_destruct;
- (id)allMetadata;
- (void)AddFrameDictionary:withCMTime:toArray:;
- (int)AddInfoFromMetadata:withTimeStamp:toArray:;
- (int)processVideoTrack:;
- (int)processStillFrameTimeForAsset:toDictionary:;
- (id)inMovieAsset;
- (void)setInMovieAsset:;
- (id)desiredIrisKeysArray;
- (void)setDesiredIrisKeysArray:;
- (BOOL)processedFile;
- (void)setProcessedFile:;
- (id)framesMetadataArray;
- (id)videoTrackMetadataDict;
- (int)processFile;
- (BOOL)saveAllMetadata;
- (void)setSaveAllMetadata:;
@end
