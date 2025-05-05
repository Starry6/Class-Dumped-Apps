@interface UISOpenURLAction : BSAction
@property (nonatomic) NSURL url;
@property (nonatomic) BSProcessHandle workspaceOriginatingProcess;
- (id)url;
- (id)initWithURL:;
- (id)initWithURL:workspaceOriginatingProcess:;
- (id)workspaceOriginatingProcess;
- (long long)UIActionType;
- (BOOL)isKindOfClass:;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
- (id)keyDescriptionForSetting:;
@end
