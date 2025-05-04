@interface AWEIMWaitingQueueItem : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSDictionary extraParams;
- (id)secUserID;
- (void)setSecUserID:;
- (void)setExtraParams:;
- (id)extraParams;
- (id)userID;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setUserID:;
@end
