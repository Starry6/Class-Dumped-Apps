@interface IESLiveInteractionLinkSessionTrackContextImpl : NSObject
@property (nonatomic) <IESLiveInteractionLinkSessionTrackContextDataSource> dataSource;
@property (nonatomic) NSString requestPage;
@property (nonatomic) NSString connectType;
@property (nonatomic) NSString overType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRequestPage:;
- (long long)isApproveNeeded;
- (void)setConnectType:;
- (BOOL)addedToAlternateList;
- (id)connectType;
- (id)overType;
- (id)requestPage;
- (void)setOverType:;
- (long long)tagType;
- (void)setDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
@end
