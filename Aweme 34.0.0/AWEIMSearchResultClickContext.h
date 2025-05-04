@interface AWEIMSearchResultClickContext : NSObject
@property (nonatomic) BOOL recordHistory;
@property (nonatomic) Q enterMethod;
@property (nonatomic) BOOL isOnline;
@property (nonatomic) NSNumber isRecommend;
- (void)setEnterMethod:;
- (unsigned long long)enterMethod;
- (id)isRecommend;
- (void)setIsRecommend:;
- (id)initWithEnterMethod:recordHistory:;
- (BOOL)recordHistory;
- (void)setRecordHistory:;
- (BOOL)isOnline;
- (void).cxx_destruct;
- (void)setIsOnline:;
@end
