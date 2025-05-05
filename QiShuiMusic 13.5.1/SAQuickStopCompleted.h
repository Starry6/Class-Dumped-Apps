@interface SAQuickStopCompleted : SABaseCommand
@property (nonatomic) NSString categoryStopped;
@property (nonatomic) NSNumber confirmationRequired;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)confirmationRequired;
- (id)categoryStopped;
- (void)setCategoryStopped:;
- (void)setConfirmationRequired:;
@end
