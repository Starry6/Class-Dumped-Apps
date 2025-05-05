@interface BDUPCLoginResult : NSObject
@property (nonatomic) NSString code;
@property (nonatomic) NSError error;
@property (nonatomic) NSString platformAppID;
- (id)platformAppID;
- (void)setPlatformAppID:;
- (void)setError:;
- (id)code;
- (id)error;
- (void).cxx_destruct;
- (void)setCode:;
@end
