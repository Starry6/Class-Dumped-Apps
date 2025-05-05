@interface AWEIMGroupOwnerLivingModel : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) NSString cid;
@property (nonatomic) NSString roomId;
@property (nonatomic) BOOL isLiving;
- (BOOL)isLiving;
- (id)roomId;
- (void)setIsLiving:;
- (void)setRoomId:;
- (id)userId;
- (id)cid;
- (void).cxx_destruct;
- (void)setUserId:;
- (BOOL)isEqual:;
- (void)setCid:;
@end
