@interface IMEventListenerResponse : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userInfo;
- (void)setError:;
- (id)error;
- (void)setSuccess:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)didSucceed;
- (id)initWithSuccess:userInfo:error:;
@end
