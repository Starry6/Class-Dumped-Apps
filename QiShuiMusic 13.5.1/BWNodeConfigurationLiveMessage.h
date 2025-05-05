@interface BWNodeConfigurationLiveMessage : BWNodeMessage
@property (nonatomic) q configurationID;
@property (nonatomic) BWFormat updatedFormat;
- (long long)configurationID;
- (void)dealloc;
- (id)updatedFormat;
+ (id)newMessageWithConfigurationID:;
+ (id)newMessageWithConfigurationID:updatedFormat:;
@end
