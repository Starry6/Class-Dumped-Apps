@interface VCPMergeCandidatePair : NSObject
@property (nonatomic) NSString person1LocalIdentifier;
@property (nonatomic) NSString person2LocalIdentifier;
@property (nonatomic) NSString reason;
- (id)reason;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithPerson:andPerson:reason:;
- (id)person1LocalIdentifier;
- (id)person2LocalIdentifier;
+ (id)mergeCandidatePairWithPerson:andPerson:reason:;
@end
