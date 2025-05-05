@interface SATimerGetCompleted : SABaseCommand
@property (nonatomic) SATimerObject timer;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setTimer:;
- (id)encodedClassName;
- (id)timer;
+ (id)getCompleted;
+ (id)getCompletedWithDictionary:context:;
@end
