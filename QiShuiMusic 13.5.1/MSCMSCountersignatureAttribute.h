@interface MSCMSCountersignatureAttribute : NSObject
@property (nonatomic) NSArray signerInfoSet;
- (void).cxx_destruct;
- (id)initWithAttribute:error:;
- (id)encodeAttributeWithError:;
- (id)initWithAttribute:LAContext:error:;
- (id)initWithSignerInfo:;
- (void)addSignerInfo:;
- (BOOL)verifyCountersignatures:error:;
- (BOOL)verifyCountersignaturesAndCountersignersWithPolicies:verifyTime:signature:error:;
- (id)signerInfoSet;
@end
