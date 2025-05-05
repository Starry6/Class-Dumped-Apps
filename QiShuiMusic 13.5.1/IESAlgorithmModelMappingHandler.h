@interface IESAlgorithmModelMappingHandler : NSObject
@property (nonatomic) NSMutableDictionary originModelNameMap;
@property (nonatomic) NSMutableDictionary mixModelNameMap;
@property (nonatomic) NSDictionary mixFromStringMap;
@property (nonatomic) NSDictionary mixToStringMap;
- (id)mixModelNameMap;
- (BOOL)makeMappingWithOriginModelName:;
- (void)buildMixStringMap;
- (id)getMapModelNameWithModelName:;
- (BOOL)makeMappingWithMapModelName:;
- (id)mixFromStringMap;
- (id)mixToStringMap;
- (id)originModelNameMap;
- (void)setMixFromStringMap:;
- (void)setMixModelNameMap:;
- (void)setMixToStringMap:;
- (void)setOriginModelNameMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultHandler;
@end
