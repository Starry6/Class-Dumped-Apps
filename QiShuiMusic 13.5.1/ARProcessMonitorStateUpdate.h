@interface ARProcessMonitorStateUpdate : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger pid;
@property (nonatomic) q taskState;
@property (nonatomic) q debugState;
@property (nonatomic) BOOL isVisible;
- (long long)taskState;
- (long long)debugState;
- (int)pid;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isVisible;
- (id)name;
- (id)initWithRBSProcessStateUpdate:;
@end
