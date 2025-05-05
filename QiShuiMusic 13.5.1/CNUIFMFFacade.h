@interface CNUIFMFFacade : NSObject
@property (nonatomic) FMFSession fmfSession;
- (id)init;
- (id)initWithFMFSession:;
- (void).cxx_destruct;
- (void)fetchFriendHandlesWithCompletionHandler:;
- (id)fmfSession;
@end
