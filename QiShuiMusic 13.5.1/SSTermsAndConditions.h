@interface SSTermsAndConditions : NSObject
@property (nonatomic) BOOL userAccepted;
@property (nonatomic) NSString currentText;
@property (nonatomic) q currentVersionIdentifier;
@property (nonatomic) BOOL requiresAuthentication;
- (void)dealloc;
- (BOOL)requiresAuthentication;
- (id)copyWithZone:;
- (id)currentText;
- (void)setCurrentText:;
- (id)initWithResponseData:error:;
- (long long)currentVersionIdentifier;
- (void)setCurrentVersionIdentifier:;
- (BOOL)isUserAccepted;
- (void)setUserAccepted:;
@end
