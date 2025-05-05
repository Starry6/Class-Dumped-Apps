@interface SASyncServerVerify : SABaseCommand
@property (nonatomic) BOOL fetchSyncDebugInfo;
@property (nonatomic) BOOL performInternalVerification;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)fetchSyncDebugInfo;
- (void)setFetchSyncDebugInfo:;
- (BOOL)performInternalVerification;
- (void)setPerformInternalVerification:;
+ (id)serverVerify;
+ (id)serverVerifyWithDictionary:context:;
@end
