@interface SSSilentEnrollment : SSRequest
@property (nonatomic) SSSilentEnrollmentContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (id)initWithSilentEnrollmentContext:;
@end
