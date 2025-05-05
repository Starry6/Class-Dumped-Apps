@interface BDUGLuckyActivityTaskSessionManager : NSObject
@property (nonatomic) NSMutableDictionary sessionDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getSessionInfoWithGlobalTaskId:;
- (id)buildTrackerSessionInfoWithGlobalTaskId:event:;
- (id)createSessionWithGlobalTaskId:;
- (void)removeSessionForGlobalTaskId:;
- (id)updateSessionAssociateInfoForGlobalTaskId:canAssociateBusinessEvent:;
- (id)updateSessionIndexForGlobalTaskId:;
- (id)init;
- (void).cxx_destruct;
- (id)sessionDict;
- (void)setSessionDict:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
