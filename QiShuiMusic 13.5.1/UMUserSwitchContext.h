@interface UMUserSwitchContext : NSObject
@property (nonatomic) NSData setupData;
@property (nonatomic) NSString shortLivedToken;
@property (nonatomic) BOOL secondaryActionRequired;
@property (nonatomic) NSDictionary environmentsByServices;
- (id)shortLivedToken;
- (id)dictRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)dataRepresentation;
- (id)setupData;
- (void)setSetupData:;
- (void)setShortLivedToken:;
- (BOOL)secondaryActionRequired;
- (void)setSecondaryActionRequired:;
- (id)environmentsByServices;
- (void)setEnvironmentsByServices:;
+ (id)contextWithSetupData:shortLivedToken:secondaryActionRequired:;
+ (id)contextWithDataRepresentation:;
+ (void)_switchEnvironmentsByServices:;
@end
