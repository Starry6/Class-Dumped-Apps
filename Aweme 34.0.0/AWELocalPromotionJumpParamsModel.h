@interface AWELocalPromotionJumpParamsModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString createSecUserID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString roomID;
@property (nonatomic) BOOL isBreathing;
- (id)secUserID;
- (void)setSecUserID:;
- (id)createSecUserID;
- (void)setCreateSecUserID:;
- (void)setIsBreathing:;
- (id)itemID;
- (void)setItemID:;
- (id)roomID;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setRoomID:;
- (BOOL)isBreathing;
@end
