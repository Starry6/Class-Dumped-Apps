@interface BDHMContainerViewPool : NSObject
@property (nonatomic) NSMutableDictionary viewDict;
- (void)removeforContainerID:;
- (void)setView:forContainerID:;
- (void)setViewDict:;
- (id)viewDict;
- (id)viewForContainerID:;
- (void).cxx_destruct;
+ (id)shared;
@end
