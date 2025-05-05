@interface ARNativeSessionWrapper : NSObject
@property (nonatomic) ARSession session;
@property (nonatomic) NSMutableDictionary anchorMap;
- (void)setSession:;
- (id)init;
- (id)session;
- (void).cxx_destruct;
- (id)anchorMap;
- (void)setAnchorMap:;
@end
