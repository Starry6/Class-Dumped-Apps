@interface AWEIMShareModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {_NSRange=QQ} matchRange;
@property (nonatomic) NSString name;
@property (nonatomic) NSString sigLabel;
@property (nonatomic) NSURL avatarURL;
@property (nonatomic) q type;
@property (nonatomic) NSString toSessionID;
@property (nonatomic) NSString toUserID;
@property (nonatomic) BOOL isCertified;
@property (nonatomic) UIImage certifiedImage;
@property (nonatomic) BOOL isFriend;
@property (nonatomic) NSString secUserID;
@property (nonatomic) Q participantsCount;
@property (nonatomic) BOOL stickOnTop;
@property (nonatomic) q followStatus;
@property (nonatomic) BOOL isGreetingMessage;
@property (nonatomic) BOOL isStranger;
@property (nonatomic) BOOL isFromRecentContact;
@property (nonatomic) NSString fromGroupID;
@property (nonatomic) BOOL isBannedGroup;
@property (nonatomic) BOOL isConversationStatusNormal;
@property (nonatomic) q blockStatus;
@property (nonatomic) BOOL isCurrentUserAParticipant;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) IESIMSaaSAWEIMUser toUser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithIMUser:;
- (void)setBlockStatus:;
- (id)initWithIMChat:;
- (void)setFromGroupID:;
- (void)setIsCertified:;
- (void)setToSessionID:;
- (id)avatarURL;
- (long long)blockStatus;
- (id)certifiedImage;
- (long long)followStatus;
- (id)fromGroupID;
- (id)iesAvatarUrlString;
- (id)iesDisplayNameString;
- (id)initWithIMConversation:;
- (BOOL)isBannedGroup;
- (BOOL)isConversationStatusNormal;
- (BOOL)isCurrentUserAParticipant;
- (BOOL)isFromRecentContact;
- (BOOL)isGreetingMessage;
- (BOOL)isStranger;
- (id)keyForPlaceholder;
- (id)p_getSigLabel:;
- (BOOL)p_isCertifiedUser:;
- (id)p_verifyBadgeImage:;
- (id)secUserID;
- (void)setAvatarURL:;
- (void)setCertifiedImage:;
- (void)setFollowStatus:;
- (void)setIsBannedGroup:;
- (void)setIsConversationStatusNormal:;
- (void)setIsCurrentUserAParticipant:;
- (void)setIsFriend:;
- (void)setIsFromRecentContact:;
- (void)setIsGreetingMessage:;
- (void)setIsStranger:;
- (void)setParticipantsCount:;
- (void)setSecUserID:;
- (void)setSigLabel:;
- (void)setStickOnTop:;
- (void)setToUser:;
- (void)setToUserID:;
- (long long)shareModelType;
- (id)sigLabel;
- (BOOL)stickOnTop;
- (id)toSessionID;
- (id)toUserID;
- (void)updateWithIMUser:;
- (void)setName:;
- (id)userType;
- (id)identifier;
- (void)setType:;
- (unsigned long long)hash;
- (unsigned long long)participantsCount;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (BOOL)isFriend;
- (void)setHasShown:;
- (BOOL)hasShown;
- (BOOL)isCertified;
- (id)toUser;
- (id)matchRange;
- (void)setMatchRange:;
@end
