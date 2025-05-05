@interface IESVideoBSSettingManager : NSObject
@property (nonatomic) <IESVideoBSNetworkDelegate> delegate;
- (void)configSettingsWithModel:;
- (void)requestSettingWithURLString:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
