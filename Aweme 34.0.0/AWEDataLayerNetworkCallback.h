@interface AWEDataLayerNetworkCallback : NSObject
@property (nonatomic) AWEDataLayerFetchDataToken token;
@property (nonatomic) @? completion;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
+ (id)callbackWithToken:completion:;
@end
