@interface AWEIMUnreadMessagesConsumerHints : NSObject
@property (nonatomic) NSAttributedString airborneHint;
@property (nonatomic) NSAttributedString fansGroupCouponHint;
@property (nonatomic) NSAttributedString liveGroupAnnouncementHint;
@property (nonatomic) NSAttributedString fansGroupVoteHint;
@property (nonatomic) NSAttributedString rtvMissedCallHint;
@property (nonatomic) NSAttributedString redPacketHint;
- (id)rtvMissedCallHint;
- (id)fansGroupCouponHint;
- (id)liveGroupAnnouncementHint;
- (id)redPacketHint;
- (id)fansGroupVoteHint;
- (id)airborneHint;
- (void)setAirborneHint:;
- (void)setFansGroupCouponHint:;
- (void)setLiveGroupAnnouncementHint:;
- (void)setFansGroupVoteHint:;
- (void)setRtvMissedCallHint:;
- (void)setRedPacketHint:;
- (void).cxx_destruct;
@end
