@interface SASurfStatus : SADomainObject
@property (nonatomic) NSString currentState;
- (void)setCurrentState:;
- (id)groupIdentifier;
- (id)currentState;
- (id)encodedClassName;
+ (id)surfStatus;
+ (id)surfStatusWithDictionary:context:;
@end
