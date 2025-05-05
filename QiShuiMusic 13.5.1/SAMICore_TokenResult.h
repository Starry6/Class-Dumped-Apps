@interface SAMICore_TokenResult : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) NSInteger expiration;
- (id)token;
- (void)setToken:;
- (int)expiration;
- (void)setExpiration:;
@end
