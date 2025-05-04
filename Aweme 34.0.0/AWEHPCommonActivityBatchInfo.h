@interface AWEHPCommonActivityBatchInfo : NSObject
@property (nonatomic) AWEHPRealTimeActivityResourceModel dynamicInfo;
@property (nonatomic) AWEHPRealTimeActivityInfo backupInfo;
- (void)setDynamicInfo:;
- (id)initWithDynamicInfo:backupInfo:;
- (BOOL)isSameChannelInfo:;
- (long long)getVersionID;
- (id)getChannelInfo;
- (void)setBackupInfo:;
- (void).cxx_destruct;
- (id)dynamicInfo;
- (id)backupInfo;
- (BOOL)isEqual:;
@end
