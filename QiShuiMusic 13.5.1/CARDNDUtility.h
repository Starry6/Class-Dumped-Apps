@interface CARDNDUtility : NSObject
@property (nonatomic) CARAutomaticDNDStatus DNDStatus;
- (id)init;
- (void).cxx_destruct;
- (id)outputFromRhodesUtility;
- (id)DNDStatus;
- (void)setDNDStatus:;
+ (id)sharedInstance;
@end
