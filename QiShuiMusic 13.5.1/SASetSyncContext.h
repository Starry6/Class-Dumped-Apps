@interface SASetSyncContext : SABaseCommand
@property (nonatomic) NSArray objects;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setObjects:;
- (id)objects;
- (id)encodedClassName;
+ (id)setSyncContext;
+ (id)setSyncContextWithDictionary:context:;
@end
