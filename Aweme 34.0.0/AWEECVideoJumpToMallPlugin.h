@interface AWEECVideoJumpToMallPlugin : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpBtnInfoWithModel:;
- (id)createJumpToMallTrackParamsWithMethod:context:;
- (void)componentDidShowWithInfo:context:container:;
- (void)componentDidClickWithInfo:context:container:;
- (id)customRouterParamsWithInfo:urlString:context:;
@end
