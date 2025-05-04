@interface AWEImageInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)setupGlobalConfig;
+ (id)cacheKeyFilter:;
+ (void)notifyImageWillDecode:;
+ (void)notifyImageUsage:;
+ (void)setupGlobalMonitorConfig;
+ (BOOL)HEICConfig:defaultValue:;
+ (id)getBizTagWithURL:;
+ (void)setupFormatTransform;
+ (void)setupSafetyHeaderWithABConfig:;
+ (void)execute;
@end
