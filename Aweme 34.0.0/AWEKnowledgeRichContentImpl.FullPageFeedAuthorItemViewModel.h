@interface AWEKnowledgeRichContentImpl.FullPageFeedAuthorItemViewModel : AWEKnowledgeRichContentImpl.FullPageFeedBaseItemViewModel
@property (nonatomic) BOOL isNoAccountAd;
@property (nonatomic) NSString username;
@property (nonatomic) _TtC27AWEKnowledgeRichContentImpl30FullPageFeedAuthorRelationItem relationItem;
@property (nonatomic) double itemHeight;
- (void)didFinishLogin;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (BOOL)isNoAccountAd;
- (void)setIsNoAccountAd:;
- (id)relationItem;
- (void)setRelationItem:;
- (void)configWithSectionContext:model:;
- (void)setUsername:;
- (void)dealloc;
- (id)username;
- (void).cxx_destruct;
- (double)itemHeight;
@end
