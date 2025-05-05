@interface CNDDonorLoader : NSObject
@property (nonatomic) <CNDonationLoggerProvider> loggerProvider;
- (id)init;
- (id)loggerProvider;
- (void).cxx_destruct;
- (id)donorWithIdentifier:;
+ (id)extensionAttributes;
+ (id)continuousExtensionsObservable;
+ (id)currentExtensionsObservable;
@end
