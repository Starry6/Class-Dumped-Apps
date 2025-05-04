@interface AWEWorkspaceDraftTask : NSObject
@property (nonatomic) NSString draftID;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString actionDescriprion;
@property (nonatomic) @? action;
- (id)draftID;
- (id)initWithDraftID:actionDescriprion:;
- (BOOL)isCurrentUserTask;
- (id)actionDescriprion;
- (id)userID;
- (void)dealloc;
- (void)setAction:;
- (id)action;
- (id)description;
- (void).cxx_destruct;
@end
