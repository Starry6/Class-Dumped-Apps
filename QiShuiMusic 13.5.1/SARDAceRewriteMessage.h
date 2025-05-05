@interface SARDAceRewriteMessage : AceObject
@property (nonatomic) NSString rewriteType;
@property (nonatomic) NSString rewrittenUtterance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)rewrittenUtterance;
- (void)setRewrittenUtterance:;
- (id)rewriteType;
- (void)setRewriteType:;
@end
