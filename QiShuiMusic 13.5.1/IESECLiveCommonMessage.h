@interface IESECLiveCommonMessage : GPBMessage
@property (nonatomic) NSInteger msgType;
@property (nonatomic) q screenshotTimestamp;
@property (nonatomic) IESECRoomTagOfflineInfo roomTagOfflineInfo;
@property (nonatomic) BOOL hasRoomTagOfflineInfo;
@property (nonatomic) IESECFilterSwitchChangeData filterSwitchChangeData;
@property (nonatomic) BOOL hasFilterSwitchChangeData;
@property (nonatomic) IESECGMVData gmvData;
@property (nonatomic) BOOL hasGmvData;
+ (id)descriptor;
@end
