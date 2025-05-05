@interface TVLStreamData : NSObject
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) NSURL LLASHURL;
@property (nonatomic) NSArray playableURLs;
@property (nonatomic) NSDictionary ABRLogInfo;
@property (nonatomic) q codecNotSame;
@property (nonatomic) q bitrateAbnormal;
- (id)ABRLogInfo;
- (id)LLASHMPDWithPlayableURLs:;
- (id)LLASHURL;
- (long long)bitrateAbnormal;
- (id)ABRLogInfoWithLLASHMPD:;
- (long long)codecNotSame;
- (id)commonQueryItems;
- (id)playableURLs;
- (void)setABRLogInfo:;
- (void)setBitrateAbnormal:;
- (void)setCodecNotSame:;
- (void)setLLASHURL:;
- (void)setPlayableURLs:;
- (void)setRawData:;
- (void).cxx_destruct;
- (id)rawData;
- (id)initWithRawData:;
+ (id)LLASHURLWithMPD:;
+ (id)streamDataWithRawData:;
@end
