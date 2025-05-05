@interface NRTermsAcknowledgementRegistry : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)add:forDeviceID:withCompletion:;
- (void)checkForAcknowledgement:forDeviceID:withCompletion:;
+ (id)errorStringWithEnum:;
+ (id)errorWithEnum:;
@end
