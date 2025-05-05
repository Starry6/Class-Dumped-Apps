@interface DMFRefreshCellularPlansRequest : DMFTaskRequest
@property (nonatomic) NSURL eSIMServerURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)eSIMServerURL;
- (void)setESIMServerURL:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
