@interface SAUserProfile : SABaseCommand
@property (nonatomic) NSArray names;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setNames:;
- (BOOL)requiresResponse;
- (id)names;
- (id)encodedClassName;
@end
