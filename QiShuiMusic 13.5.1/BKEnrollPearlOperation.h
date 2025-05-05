@interface BKEnrollPearlOperation : BKEnrollOperation
@property (nonatomic) <BKEnrollPearlOperationDelegate> delegate;
@property (nonatomic) q enrollmentType;
@property (nonatomic) BOOL clientToComplete;
@property (nonatomic) BKIdentity augmentedIdentity;
@property (nonatomic) q periocularGlassesRequirement;
- (BOOL)startWithError:;
- (BOOL)suspendWithError:;
- (BOOL)resumeWithError:;
- (void)enrollFeedback:client:;
- (void)setEnrollmentType:;
- (void)enrollUpdate:client:;
- (id)optionsDictionaryWithError:;
- (void).cxx_destruct;
- (void)statusMessage:client:;
- (id)initWithDevice:;
- (long long)enrollmentType;
- (BOOL)completeWithError:;
- (id)enrollResultInfoWithServerIdentity:details:;
- (BOOL)clientToComplete;
- (void)setClientToComplete:;
- (id)augmentedIdentity;
- (void)setAugmentedIdentity:;
- (long long)periocularGlassesRequirement;
- (void)setPeriocularGlassesRequirement:;
@end
