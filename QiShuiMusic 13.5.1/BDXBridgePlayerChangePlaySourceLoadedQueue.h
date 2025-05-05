@interface BDXBridgePlayerChangePlaySourceLoadedQueue : BDXBridgeModel
@property (nonatomic) BOOL has_more;
@property (nonatomic) NSString next_cursor;
@property (nonatomic) NSArray playable_list;
- (void)setNext_cursor:;
- (BOOL)has_more;
- (id)next_cursor;
- (id)playable_list;
- (void)setHas_more:;
- (void)setPlayable_list:;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
