@interface BKSSystemShellControlService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCalloutQueue:;
- (void)_activateServerConnection;
- (void).cxx_destruct;
- (void)terminateSystemShellWithJobLabel:;
+ (id)sharedInstance;
@end
