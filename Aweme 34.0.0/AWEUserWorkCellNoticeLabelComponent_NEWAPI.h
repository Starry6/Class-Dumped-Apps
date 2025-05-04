@interface AWEUserWorkCellNoticeLabelComponent_NEWAPI : AWEUserWorkCellBaseComponent
@property (nonatomic) AWEProfilePostUnreadNoticeModel unreadNoticeModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildSubComponents;
- (void)bindEvents;
- (void)clearUnreadNoticeAfterCoverTapped;
- (unsigned long long)landingCommentTabType;
- (BOOL)canShowNoticeLabel;
- (void)trackMsgShow;
- (BOOL)dynamicComponent;
- (void)updateCachedUnreadNoticeModel;
- (void)clearUnreadNoticeWithOption:;
- (void)trackMsgShowIfNeeded;
- (void)updateCommentTabChangedObserver;
- (id)unreadNoticeModel;
- (void)setUnreadNoticeModel:;
- (void)clearUnreadNotice:;
- (void)commentTabDidSelectedNoti:;
- (void)richAwemeFullPageNoti:;
- (void)videoPlayNoti:;
- (long long)unreadCount;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:context:;
+ (id)componentWithData:context:;
@end
