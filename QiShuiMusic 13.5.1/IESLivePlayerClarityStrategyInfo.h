@interface IESLivePlayerClarityStrategyInfo : NSObject
@property (nonatomic) q qualityType;
@property (nonatomic) NSString name;
@property (nonatomic) NSString sdkKey;
@property (nonatomic) NSString resolution;
@property (nonatomic) NSString oldName;
@property (nonatomic) NSString oldSdkKey;
@property (nonatomic) NSString oldResolution;
- (id)oldName;
- (id)oldResolution;
- (id)oldSdkKey;
- (id)sdkKey;
- (void)setOldName:;
- (void)setOldResolution:;
- (void)setOldSdkKey:;
- (void)setSdkKey:;
- (void)setName:;
- (void)setResolution:;
- (id)resolution;
- (void).cxx_destruct;
- (id)name;
- (long long)qualityType;
- (void)setQualityType:;
@end
