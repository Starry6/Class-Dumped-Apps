@interface AWEHPHambCmd : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSArray nodes;
- (id)initWithNodes:path:;
- (BOOL)isValidWithError:;
- (id)path;
- (void).cxx_destruct;
- (id)nodes;
+ (id)p_generateNodesWithPath:;
+ (id)p_generatePathWithNames:;
+ (id)p_generatePathWithNodes:;
+ (id)cmdWithPath:;
+ (id)cmdWithNames:;
+ (id)cmdWithNodes:;
@end
