@interface AWENewNearbyListInsertionCache : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSNumber awemeCountInResponse;
@property (nonatomic) NSNumber indexInResponse;
@property (nonatomic) NSString respID;
@property (nonatomic) @? complete;
@property (nonatomic) @? willInsertHandler;
- (id)aweme;
- (void)setAweme:;
- (id)awemeCountInResponse;
- (void)setAwemeCountInResponse:;
- (void)setIndexInResponse:;
- (id)respID;
- (void)setRespID:;
- (id)willInsertHandler;
- (void)setWillInsertHandler:;
- (id)complete;
- (void).cxx_destruct;
- (void)setComplete:;
- (id)indexInResponse;
@end
