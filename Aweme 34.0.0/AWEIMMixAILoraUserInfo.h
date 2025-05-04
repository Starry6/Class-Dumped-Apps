@interface AWEIMMixAILoraUserInfo : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString modelID;
@property (nonatomic) q roleType;
@property (nonatomic) q slotCreateTime;
- (void)setRoleType:;
- (long long)roleType;
- (long long)slotCreateTime;
- (void)setSlotCreateTime:;
- (void)setModelID:;
- (id)userID;
- (id)modelID;
- (void).cxx_destruct;
- (id)initWithDict:;
- (void)setUserID:;
@end
