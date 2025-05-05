@interface ML3DatabaseFunction : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger argumentCount;
- (void)setName:;
- (BOOL)registerWithConnection:;
- (void).cxx_destruct;
- (id)name;
- (void)setArgumentCount:;
- (id)initWithName:argumentCount:;
- (int)argumentCount;
@end
