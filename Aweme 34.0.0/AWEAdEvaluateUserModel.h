@interface AWEAdEvaluateUserModel : MTLModel
@property (nonatomic) NSString userID;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString avatar;
@property (nonatomic) BOOL hasReservation;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) BOOL hasClue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasClue;
- (void)setHasReservation:;
- (void)setHasClue:;
- (id)userID;
- (BOOL)isAnonymous;
- (id)uniqueID;
- (void)setUniqueID:;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
- (void)setIsAnonymous:;
- (void)setUserID:;
- (id)avatar;
- (void)setAvatar:;
- (BOOL)hasReservation;
+ (id)JSONKeyPathsByPropertyKey;
@end
