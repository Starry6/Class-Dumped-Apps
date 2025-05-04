@interface AWEKnowledgeStateSceneStack : NSObject
@property (nonatomic) NSMutableArray stackArray;
@property (nonatomic) NSMutableDictionary lookupDictionary;
@property (nonatomic) NSString stackToken;
- (id)stackToken;
- (void)setStackToken:;
- (BOOL)pushForScene:;
- (id)findSceneForToken:;
- (id)stackArray;
- (void)setStackArray:;
- (void)setLookupDictionary:;
- (id)top;
- (id)pop;
- (id)lookupDictionary;
- (BOOL)isEmpty;
- (void).cxx_destruct;
@end
