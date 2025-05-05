@interface IDSSignInControllerAccountDescription : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSNumber state;
@property (nonatomic) @? completion;
- (id)completion;
- (void)setCompletion:;
- (void)setState:;
- (void)setServiceName:;
- (id)serviceName;
- (id)state;
- (void).cxx_destruct;
@end
