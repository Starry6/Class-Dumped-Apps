@interface AVInternalDeviceList : NSObject
@property (nonatomic) @? changeListener;
- (id)init;
- (void)dealloc;
- (void)setChangeListener:;
- (void)cleanup;
- (id)changeListener;
- (id)deviceList;
- (unsigned int)dataSourceControlID;
- (void)notifyDeviceListChanged;
+ (id)newDeviceList;
+ (id)defaultDeviceOfType:;
@end
