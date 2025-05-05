@interface IESGurdSettingsResponseExtra : NSObject
@property (nonatomic) NSArray noLocalAk;
@property (nonatomic) NSDictionary probe;
- (id)noLocalAk;
- (void)setNoLocalAk:;
- (void)setProbe:;
- (void).cxx_destruct;
- (id)probe;
+ (id)extraWithDictionary:;
@end
