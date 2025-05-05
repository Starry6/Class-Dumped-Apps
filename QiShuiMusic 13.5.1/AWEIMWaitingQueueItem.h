@interface AWEIMWaitingQueueItem : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (id)secUserID;
- (void)setSecUserID:;
- (id)userID;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)setUserID:;
- (BOOL)isEqual:;
@end
