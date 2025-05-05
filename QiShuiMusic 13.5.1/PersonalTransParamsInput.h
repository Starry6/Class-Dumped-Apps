@interface PersonalTransParamsInput : NSObject
@property (nonatomic) NSInteger liveCurrentVbitrate;
@property (nonatomic) NSMutableDictionary mHistoryDownloadSpeedMap;
@property (nonatomic) NSString liveCurrentNeptuneName;
@property (nonatomic) NSInteger connectTypeValue;
@property (nonatomic) @ rtt;
@property (nonatomic) NSDictionary nqeInfo;
- (id)nqeInfo;
- (int)connectTypeValue;
- (id)liveCurrentNeptuneName;
- (int)liveCurrentVbitrate;
- (id)mHistoryDownloadSpeedMap;
- (void)setConnectTypeValue:;
- (void)setLiveCurrentNeptuneName:;
- (void)setLiveCurrentVbitrate:;
- (void)setMHistoryDownloadSpeedMap:;
- (void)setNqeInfo:;
- (id)rtt;
- (void)setRtt:;
@end
