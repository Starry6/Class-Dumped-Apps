@interface IESLiveInteractionLinkerApplyParams : IESLiveInteractionLinkerParams
@property (nonatomic) NSNumber mode;
@property (nonatomic) NSNumber position;
@property (nonatomic) NSNumber muteState;
@property (nonatomic) Q applySource;
@property (nonatomic) NSString requestPage;
@property (nonatomic) NSString applyReason;
- (void)setApplyReason:;
- (void)setApplySource:;
- (void)setRequestPage:;
- (id)applyReason;
- (unsigned long long)applySource;
- (id)muteState;
- (id)requestPage;
- (void)setMuteState:;
- (void)setPosition:;
- (id)position;
- (void).cxx_destruct;
- (id)mode;
- (void)setMode:;
@end
