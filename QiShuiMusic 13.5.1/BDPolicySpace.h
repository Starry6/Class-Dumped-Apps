@interface BDPolicySpace : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSString certType;
- (id)uniqueId;
- (void).cxx_destruct;
- (id)domain;
- (void)setDomain:;
- (id)certType;
- (void)setCertType:;
+ (id)createWithDomain:;
+ (id)createWithDomain:certType:;
+ (id)possibleUidsForCertUnit:;
@end
