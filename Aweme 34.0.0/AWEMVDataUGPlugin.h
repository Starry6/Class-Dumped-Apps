@interface AWEMVDataUGPlugin : NSObject
@property (nonatomic) AWEMVChannelPageContext mvContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mvContext;
- (void)setMvContext:;
- (void)willRequestWithContext:;
- (void)willFilterResponse:context:;
- (void)didFilterResponse:context:;
- (id)recommendUGInfo;
- (void)trackUGReceiveWithContext:responseModel:;
- (void)attachUGShowModelWithContext:responseModel:;
- (id)generateUGInfoTrackerModelWithRequest:response:;
- (void).cxx_destruct;
@end
