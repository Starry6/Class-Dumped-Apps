@interface WXChannelOpenFeedReq : BaseReq
@property (nonatomic) NSString feedID;
@property (nonatomic) NSString nonceID;
@property (nonatomic) BOOL notGetReleatedList;
- (id)nonceID;
- (BOOL)notGetReleatedList;
- (void)setNonceID:;
- (void)setNotGetReleatedList:;
- (id)feedID;
- (void).cxx_destruct;
- (void)setFeedID:;
+ (id)object;
@end
