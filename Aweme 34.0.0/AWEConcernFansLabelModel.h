@interface AWEConcernFansLabelModel : NSObject
@property (nonatomic) BOOL show;
@property (nonatomic) NSArray fansTagArray;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString nickname;
- (id)secUserID;
- (void)setSecUserID:;
- (id)fansTagArray;
- (void)setFansTagArray:;
- (id)nickname;
- (BOOL)show;
- (id)userID;
- (void).cxx_destruct;
- (void)setNickname:;
- (void)setUserID:;
- (void)setShow:;
@end
