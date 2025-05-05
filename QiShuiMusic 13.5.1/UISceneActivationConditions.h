@interface UISceneActivationConditions : NSObject
@property (nonatomic) UIScene _UIScene;
@property (nonatomic) NSPredicate canActivateForTargetContentIdentifierPredicate;
@property (nonatomic) NSPredicate prefersToActivateForTargetContentIdentifierPredicate;
- (id)init;
- (long long)_suitabilityForTargetContentIdentifier:errorString:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setCanActivateForTargetContentIdentifierPredicate:;
- (void)encodeWithCoder:;
- (id)prefersToActivateForTargetContentIdentifierPredicate;
- (void)setPrefersToActivateForTargetContentIdentifierPredicate:;
- (BOOL)_validateCompileTimeIssues:runTimeIssues:;
- (void).cxx_destruct;
- (id)description;
- (id)_UIScene;
- (void)_setUIScene:;
- (BOOL)isEqual:;
- (id)canActivateForTargetContentIdentifierPredicate;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
