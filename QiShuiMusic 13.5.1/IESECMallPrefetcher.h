@interface IESECMallPrefetcher : NSObject
@property (nonatomic) IESForestResponse forestResponse;
- (id)forestResponse;
- (void)preFetchResourceAsync:completion:;
- (void)setForestResponse:;
- (void).cxx_destruct;
@end
