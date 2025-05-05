@interface ProxyConfiguration : NSObject
@property (nonatomic) NSDictionary proxy;
@property (nonatomic) NSDictionary deviceIdentificationToken;
- (id)proxy;
- (void).cxx_destruct;
- (id)initWithDeviceIdentificationToken:;
- (void)applyToRequest:;
- (id)deviceIdentificationToken;
+ (id)currentVersion;
+ (BOOL)shouldRetryForError:;
@end
