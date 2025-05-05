@interface ASCredentialIdentityStoreState : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL supportsIncrementalUpdates;
- (id)description;
- (BOOL)isEnabled;
- (id)initWithEnabledState:supportsIncrementalUpdates:;
- (BOOL)supportsIncrementalUpdates;
@end
