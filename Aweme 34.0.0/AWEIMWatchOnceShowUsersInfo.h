@interface AWEIMWatchOnceShowUsersInfo : MTLModel
@property (nonatomic) NSNumber msgId;
@property (nonatomic) NSArray userId;
@property (nonatomic) NSArray secUserId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSecUserId:;
- (id)secUserId;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)msgId;
- (void)setMsgId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
