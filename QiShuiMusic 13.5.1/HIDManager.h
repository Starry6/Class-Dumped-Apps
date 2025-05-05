@interface HIDManager : NSObject
@property (nonatomic) NSArray devices;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void)open;
- (id)initWithOptions:;
- (id)devices;
- (void)setDeviceMatching:;
- (void)setDeviceNotificationHandler:;
- (void)setDispatchQueue:;
- (void)setCancelHandler:;
- (void)close;
- (BOOL)setProperty:forKey:;
- (id)propertyForKey:;
- (void)setInputElementMatching:;
- (void).cxx_destruct;
- (void)openWithOptions:;
- (id)description;
- (void)setInputElementHandler:;
- (void)activate;
- (void)setInputReportHandler:;
@end
