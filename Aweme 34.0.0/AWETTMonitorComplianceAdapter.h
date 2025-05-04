@interface AWETTMonitorComplianceAdapter : NSObject
@property (nonatomic) Q tag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)teenModeDidChange:isLogout:;
- (BOOL)verifyTag:;
- (void)basicModeDidChange:;
- (void)__setupMonitorTag;
- (void)__updateMonitorTag;
- (unsigned long long)__monitorTag;
- (unsigned long long)tag;
- (void)dealloc;
- (void)setTag:;
+ (void)setupMonitorTag;
+ (id)sharedInstance;
@end
