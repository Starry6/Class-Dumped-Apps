@interface AWEFeedConcernControllerContext : AWEPageContext
@property (nonatomic) <AWEFeedConcernViewModelProtocol> concernViewModel;
@property (nonatomic) BOOL isConcernRefreshing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isConcernRefreshing;
- (id)concernViewModel;
- (void)setConcernViewModel:;
- (void)setIsConcernRefreshing:;
- (void).cxx_destruct;
@end
