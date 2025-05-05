@interface ASDMigrationRequest : ASDEphemeralRequest
@property (nonatomic) ASDMigrationRequestOptions options;
- (id)initWithOptions:;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
