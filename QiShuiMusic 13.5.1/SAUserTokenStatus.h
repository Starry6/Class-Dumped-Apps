@interface SAUserTokenStatus : AceObject
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSNumber lastUpdateAttemptTime;
@property (nonatomic) NSNumber shouldExcludeFromBackgroundRefresh;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)errorCode;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)lastUpdateAttemptTime;
- (void)setLastUpdateAttemptTime:;
- (id)shouldExcludeFromBackgroundRefresh;
- (void)setShouldExcludeFromBackgroundRefresh:;
@end
