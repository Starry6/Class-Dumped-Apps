@interface CNQuickFaceTimeAction : CNQuickPropertyAction
@property (nonatomic) BOOL audioOnly;
- (unsigned long long)score;
- (id)identifier;
- (BOOL)audioOnly;
- (id)category;
- (id)_coreDuetValue;
- (id)_coreDuetInteractionMechanisms;
- (id)titleForContext:;
- (id)subtitleForContext:;
- (void)performWithCompletionBlock:;
- (void)setAudioOnly:;
+ (id)defaultFaceTimeTitle;
+ (id)defaultFaceTimeAudioTitle;
@end
