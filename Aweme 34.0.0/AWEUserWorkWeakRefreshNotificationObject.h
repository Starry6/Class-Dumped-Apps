@interface AWEUserWorkWeakRefreshNotificationObject : NSObject
@property (nonatomic) NSDictionary awemeModelDict;
@property (nonatomic) @? weakRefreshCompleteBlock;
- (id)awemeModelDict;
- (void)setAwemeModelDict:;
- (void)setWeakRefreshCompleteBlock:;
- (id)weakRefreshCompleteBlock;
- (void).cxx_destruct;
@end
