@interface SOAuthorizationPoolItem : NSObject
@property (nonatomic) SOAuthorizationCore authorization;
@property (nonatomic) <SOAuthorizationCoreDelegate> delegate;
- (id)authorization;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithAuthorization:delegate:;
@end
