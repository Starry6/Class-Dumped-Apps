@interface BDPathDocumentBundle : BDPathBaseBundle
- (id)initWithRootName:;
- (id)pathWithAutoCreated:;
- (id)pathWithSubPath:;
- (id)pathWithSubPath:autoCreated:;
- (BOOL)registerCleanRuleForSubPath:when:;
- (id)path;
@end
