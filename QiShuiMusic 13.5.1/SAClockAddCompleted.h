@interface SAClockAddCompleted : SABaseCommand
@property (nonatomic) BOOL alreadyExists;
@property (nonatomic) NSURL worldClockId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)alreadyExists;
- (void)setAlreadyExists:;
- (id)worldClockId;
- (void)setWorldClockId:;
+ (id)addCompleted;
+ (id)addCompletedWithDictionary:context:;
@end
