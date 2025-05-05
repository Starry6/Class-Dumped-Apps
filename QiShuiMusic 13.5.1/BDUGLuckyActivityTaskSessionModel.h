@interface BDUGLuckyActivityTaskSessionModel : NSObject
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSString globalTaskId;
@property (nonatomic) q index;
@property (nonatomic) BOOL canAssociateBusinessEvent;
- (BOOL)canAssociateBusinessEvent;
- (id)globalTaskId;
- (void)setCanAssociateBusinessEvent:;
- (void)setGlobalTaskId:;
- (void)setSessionId:;
- (id)sessionId;
- (long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
@end
