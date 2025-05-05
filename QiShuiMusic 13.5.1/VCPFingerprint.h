@interface VCPFingerprint : NSObject
@property (nonatomic) NSString master;
@property (nonatomic) NSString adjusted;
- (id)init;
- (id)master;
- (void).cxx_destruct;
- (id)description;
- (id)adjusted;
- (id)initWithMaster:adjusted:;
- (BOOL)isEqualToFingerprint:;
+ (id)fingerprintWithMaster:adjusted:;
@end
