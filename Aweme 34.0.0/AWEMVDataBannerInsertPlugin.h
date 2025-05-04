@interface AWEMVDataBannerInsertPlugin : NSObject
@property (nonatomic) AWEMVChannelPageContext mvContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mvContext;
- (void)setMvContext:;
- (void)onFilterResponse:context:;
- (BOOL)shouldInsertBannerForPullType:refreshType:;
- (void).cxx_destruct;
@end
