@interface IESLiveDFAnimationHandler : NSObject
@property (nonatomic) @? readBlock;
@property (nonatomic) @? updateBlock;
@property (nonatomic) @? compatibleBlock;
@property (nonatomic) @? bezierUpdateBlock;
@property (nonatomic) @? beziercompatibleBlock;
@property (nonatomic) @? updatebezierPathBlock;
- (id)compatibleBlock;
- (id)bezierUpdateBlock;
- (id)beziercompatibleBlock;
- (void)setBezierUpdateBlock:;
- (void)setBeziercompatibleBlock:;
- (void)setCompatibleBlock:;
- (void)setUpdatebezierPathBlock:;
- (id)updatebezierPathBlock;
- (id)updateBlock;
- (void).cxx_destruct;
- (void)setUpdateBlock:;
- (id)readBlock;
- (void)setReadBlock:;
+ (id)hanlderWithBezierPathUpdate:;
+ (id)hanlderWithRead:bezierUpdateBlock:compatible:;
+ (id)hanlderWithRead:update:compatible:;
@end
