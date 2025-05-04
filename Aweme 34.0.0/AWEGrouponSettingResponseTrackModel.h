@interface AWEGrouponSettingResponseTrackModel : NSObject
@property (nonatomic) AWEGrouponSettingsResponse model;
@property (nonatomic) q pageType;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSError error;
@property (nonatomic) q style;
@property (nonatomic) double requestDuration;
@property (nonatomic) double requestStartTime;
- (void)setModel:;
- (double)requestStartTime;
- (void)setRequestStartTime:;
- (void)setError:;
- (double)requestDuration;
- (void)setPageType:;
- (long long)style;
- (id)model;
- (void).cxx_destruct;
- (id)error;
- (id)params;
- (long long)pageType;
- (void)setStyle:;
- (void)setParams:;
- (void)setRequestDuration:;
@end
