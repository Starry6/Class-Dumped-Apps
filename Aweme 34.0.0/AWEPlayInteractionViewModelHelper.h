@interface AWEPlayInteractionViewModelHelper : NSObject
@property (nonatomic) <AWEPlayInteractionViewModelProtocol> viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (id)logExtraDict;
- (id)fromModel;
- (id)enterFrom;
- (id)interactor_fromModel;
- (BOOL)isFromHighValueUserRecommend;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)p_trackFollowEventWithMethod:enterMethod:;
- (void)addClickSearchResultVideoTrackForParams:;
- (void)p_trackUnFollowEventWithMethod:enterMethod:;
- (id)awe_innnerFeedPageBtmIdentifier;
- (void)p_trackFollow:Method:enterMethod:;
- (BOOL)shouldTrackFollowCard;
- (BOOL)shouldTrackFollowFromCard;
- (id)initWithViewModel:;
- (id)viewModel;
- (id)model;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)context;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
@end
