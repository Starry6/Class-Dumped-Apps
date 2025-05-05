@interface SASyncClientVerifyResult : SABaseCommand
@property (nonatomic) NSArray checksums;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)checksums;
- (void)setChecksums:;
+ (id)clientVerifyResult;
+ (id)clientVerifyResultWithDictionary:context:;
@end
