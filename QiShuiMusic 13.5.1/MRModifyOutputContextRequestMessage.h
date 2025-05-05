@interface MRModifyOutputContextRequestMessage : MRProtocolMessage
@property (nonatomic) NSArray addingOutputDeviceUIDs;
@property (nonatomic) NSArray removingOutputDeviceUIDs;
@property (nonatomic) NSArray settingOutputDeviceUIDs;
- (unsigned int)contextType;
- (unsigned long long)type;
- (id)description;
- (id)initWithAddingDeviceUIDs:removingDeviceUIDs:settingDeviceUIDs:clusterAwareAddingOutputDeviceUIDs:clusterAwareRemovingOutputDeviceUIDs:clusterAwareSettingOutputDeviceUIDs:;
- (id)addingOutputDeviceUIDs;
- (id)removingOutputDeviceUIDs;
- (id)settingOutputDeviceUIDs;
@end
