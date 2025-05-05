@interface TMSettings : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)encryptionListConfig;
+ (void)registerConfigUpdatedBlock:;
+ (id)rulerConfig;
+ (id)sdkConfig;
+ (id)sensitivePathConfig;
+ (void)syncConfig;
+ (id)settings;
@end
