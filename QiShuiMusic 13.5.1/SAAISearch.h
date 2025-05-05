@interface SAAISearch : SABaseCommand
@property (nonatomic) double duration;
@property (nonatomic) NSData fingerprint;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFingerprint:;
- (id)fingerprint;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setDuration:;
- (id)encodedClassName;
- (double)duration;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
