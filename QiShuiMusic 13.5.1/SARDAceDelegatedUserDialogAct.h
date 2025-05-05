@interface SARDAceDelegatedUserDialogAct : AceObject
@property (nonatomic) q asrHypothesisIndex;
@property (nonatomic) NSString externalParserId;
@property (nonatomic) SARDAceRewriteMessage rewriteMessage;
@property (nonatomic) NSString rewrittenUtterance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (long long)asrHypothesisIndex;
- (void)setAsrHypothesisIndex:;
- (id)externalParserId;
- (void)setExternalParserId:;
- (id)rewriteMessage;
- (void)setRewriteMessage:;
- (id)rewrittenUtterance;
- (void)setRewrittenUtterance:;
@end
