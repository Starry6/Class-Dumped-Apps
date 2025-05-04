@interface AWEMVDataFeedCachePlugin : NSObject
@property (nonatomic) AWEMVChannelPageContext mvContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mvContext;
- (void)setMvContext:;
- (void)willRequestWithContext:;
- (void)didFilterResponse:context:;
- (void).cxx_destruct;
@end
