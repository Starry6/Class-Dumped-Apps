@interface APBDeviceInfo : NSObject
@property (nonatomic) NSString dtfDeviceToken;
- (id)currentVC;
- (id)dtfDeviceToken;
- (id)getApdidToken;
- (BOOL)loadDylib;
- (void)setDtfDeviceToken:;
- (long long)languageCode;
- (void).cxx_destruct;
- (id)languageName;
- (void)initDeviceInfo;
+ (id)getInstance;
@end
