@interface SASyncChunkDenied : SABaseClientBoundCommand
@property (nonatomic) SASyncAnchor current;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString appId;
@property (nonatomic) NSArray callbacks;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)current;
- (id)groupIdentifier;
- (long long)errorCode;
- (BOOL)requiresResponse;
- (void)setCurrent:;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)initWithErrorCode:;
- (BOOL)mutatingCommand;
+ (id)chunkDenied;
+ (id)chunkDeniedWithDictionary:context:;
+ (id)chunkDeniedWithErrorCode:;
@end
