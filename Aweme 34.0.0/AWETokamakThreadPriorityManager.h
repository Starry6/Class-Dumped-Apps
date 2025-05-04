@interface AWETokamakThreadPriorityManager : NSObject
@property (nonatomic) NSDictionary containDict;
@property (nonatomic) NSDictionary equalDict;
- (id)containDict;
- (void)setContainDict:;
- (id)equalDict;
- (void)setEqualDict:;
- (void)run;
- (void).cxx_destruct;
+ (id)shared;
@end
