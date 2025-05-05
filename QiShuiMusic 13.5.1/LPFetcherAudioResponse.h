@interface LPFetcherAudioResponse : LPFetcherResponse
@property (nonatomic) LPAudio audio;
- (void).cxx_destruct;
- (id)audio;
- (id)initWithAudio:fetcher:;
+ (id)audioPropertiesForFetcher:;
@end
