@interface SANoteCreateCompleted : SABaseCommand
@property (nonatomic) NSURL identifier;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)identifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:;
+ (id)createCompleted;
+ (id)createCompletedWithDictionary:context:;
@end
