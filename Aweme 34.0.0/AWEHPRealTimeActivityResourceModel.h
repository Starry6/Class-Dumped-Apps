@interface AWEHPRealTimeActivityResourceModel : NSObject
@property (nonatomic) NSString resourceID;
@property (nonatomic) NSString cycleID;
@property (nonatomic) NSString data;
@property (nonatomic) q versionID;
@property (nonatomic) AWEHPRealTimeActivityChannelInfo channelInfo;
- (id)cycleID;
- (void)setCycleID:;
- (id)resourceID;
- (id)init;
- (void)setData:;
- (void)setResourceID:;
- (void).cxx_destruct;
- (id)data;
- (BOOL)isEqual:;
- (long long)versionID;
- (void)setVersionID:;
- (void)setChannelInfo:;
- (id)channelInfo;
@end
