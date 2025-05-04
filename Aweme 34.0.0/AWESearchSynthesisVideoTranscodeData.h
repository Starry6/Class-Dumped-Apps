@interface AWESearchSynthesisVideoTranscodeData : NSObject
@property (nonatomic) NSString transcodeType;
@property (nonatomic) NSDictionary transcodeData;
@property (nonatomic) NSDictionary transcodeAddressData;
@property (nonatomic) q transcodeDataSource;
@property (nonatomic) NSString serverVideoTranscodingData;
- (void)setTranscodeType:;
- (id)transcodeType;
- (id)transcodeData;
- (void)setTranscodeData:;
- (id)transcodeAddressData;
- (void)setTranscodeAddressData:;
- (long long)transcodeDataSource;
- (void)setTranscodeDataSource:;
- (id)serverVideoTranscodingData;
- (void)setServerVideoTranscodingData:;
- (void).cxx_destruct;
@end
