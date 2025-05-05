@interface NSMutableHTTPCookie2 : NSHTTPCookie2
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
@property (nonatomic) NSString domain;
@property (nonatomic) NSString path;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL secure;
@property (nonatomic) BOOL httpOnly;
@property (nonatomic) BOOL hostOnly;
@property (nonatomic) NSString partition;
@property (nonatomic) q source;
@property (nonatomic) q sameSite;
- (void)setPartition:;
- (void)setName:;
- (void)setPath:;
- (void)setExpirationDate:;
- (void)setSecure:;
- (void)setValue:;
- (void)setDomain:;
- (void)setSource:;
- (BOOL)isEqual:;
- (id)initWithName:value:domain:;
- (void)setSameSite:;
- (void)setHostOnly:;
- (void)setHttpOnly:;
@end
