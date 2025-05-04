@interface AWEPoiEmphraseCollectViewBarContext : NSObject
@property (nonatomic) <AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) @? assignLogExtraDictBlock;
@property (nonatomic) @? fetchCurrentAwemeListBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (id)commonCtx;
- (void)setCommonCtx:;
- (void)setAssignLogExtraDictBlock:;
- (void)setFetchCurrentAwemeListBlock:;
- (id)assignLogExtraDictBlock;
- (id)fetchCurrentAwemeListBlock;
- (void).cxx_destruct;
@end
