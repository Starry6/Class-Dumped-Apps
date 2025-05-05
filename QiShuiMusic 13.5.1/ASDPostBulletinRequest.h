@interface ASDPostBulletinRequest : ASDEphemeralRequest
@property (nonatomic) ASDPostBulletinRequestOptions options;
- (id)initWithOptions:;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
