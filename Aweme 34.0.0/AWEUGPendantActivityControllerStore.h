@interface AWEUGPendantActivityControllerStore : NSObject
@property (nonatomic) NSString lastActivityId;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastPendantFrame;
@property (nonatomic) Q pendantStructureState;
@property (nonatomic) NSString currentUid;
- (id)currentUid;
- (void)setCurrentUid:;
- (unsigned long long)pendantStructureState;
- (id)lastActivityId;
- (void)setLastActivityId:;
- (id)lastPendantFrame;
- (void)setLastPendantFrame:;
- (void)setPendantStructureState:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
