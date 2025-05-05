@interface SAPhoneCallState : AceObject
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL incoming;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)active;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setActive:;
- (BOOL)incoming;
- (void)setIncoming:;
+ (id)callState;
+ (id)callStateWithDictionary:context:;
@end
