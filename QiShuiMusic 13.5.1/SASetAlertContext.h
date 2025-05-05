@interface SASetAlertContext : SABaseCommand
@property (nonatomic) NSArray context;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)context;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setContext:;
+ (id)setAlertContext;
+ (id)setAlertContextWithDictionary:context:;
@end
