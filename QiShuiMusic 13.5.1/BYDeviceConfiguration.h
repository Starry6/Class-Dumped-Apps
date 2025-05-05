@interface BYDeviceConfiguration : NSObject
@property (nonatomic) NSString productVersion;
- (void)setProductVersion:;
- (id)productVersion;
- (id)init;
+ (id)currentConfiguration;
@end
