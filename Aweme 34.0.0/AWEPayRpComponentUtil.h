@interface AWEPayRpComponentUtil : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupTypeWithConversationId:;
- (void)trackShow:extra:;
- (void)trackIMMessageClick:extra:;
- (double)preferredMaxBubbleWidth;
- (double)bubbleCornerRadius;
- (BOOL)aweim_isGroupBlockedOrCurrentUserBlocked:;
- (BOOL)aweim_isCurrentGroupIsBanned:;
- (void)trackEnterpriseCompanyMessage:;
- (id)sizeWithOriginCoverSize:;
- (id)quetoSize;
- (void)loadMessageDetailWithContext:message:completion:;
@end
