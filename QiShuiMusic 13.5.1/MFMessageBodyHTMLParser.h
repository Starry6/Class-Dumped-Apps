@interface MFMessageBodyHTMLParser : MFMessageBodyParser
- (void)dealloc;
- (BOOL)parse;
- (void)didFindError:;
- (id)initWithHTML:;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyElementClass;
- (void)_consumeNodesFromNode:upToNode:;
- (BOOL)_isMilestoneTagName:;
- (void)_findBody;
@end
