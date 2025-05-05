@interface PKPushCredentials : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSData token;
- (id)token;
- (void)setType:;
- (void)setToken:;
- (id)type;
- (void).cxx_destruct;
@end
