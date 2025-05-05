@interface ASDEventServiceExtension : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginRequestWithExtensionContext:;
- (long long)didReceiveInstallationEvent:;
@end
