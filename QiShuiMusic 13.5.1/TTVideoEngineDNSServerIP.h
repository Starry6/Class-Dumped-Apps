@interface TTVideoEngineDNSServerIP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parser:didFinishWithAddress:error:;
+ (id)getDNSServerIP;
+ (void)updateDNSServerIP;
+ (id)sharedInstance;
@end
