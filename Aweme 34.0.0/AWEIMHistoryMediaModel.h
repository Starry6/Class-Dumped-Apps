@interface AWEIMHistoryMediaModel : NSObject
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) BOOL needShowDate;
@property (nonatomic) Q fetchState;
@property (nonatomic) NSString itemId;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) BOOL isUnavaliable;
@property (nonatomic) NSInteger likeCount;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setLikeCount:;
- (unsigned long long)fetchState;
- (void)setFetchState:;
- (BOOL)needShowDate;
- (void)setNeedShowDate:;
- (BOOL)isUnavaliable;
- (void)setIsUnavaliable:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (int)likeCount;
- (id)itemId;
- (void)setItemId:;
@end
