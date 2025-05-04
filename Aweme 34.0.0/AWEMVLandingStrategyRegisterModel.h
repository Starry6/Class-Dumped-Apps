@interface AWEMVLandingStrategyRegisterModel : NSObject
@property (nonatomic) Q priority;
@property (nonatomic) @? shouldActiveBlock;
@property (nonatomic) @? configStrategyBlock;
@property (nonatomic) @? activeBlock;
@property (nonatomic) @? notActiveBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShouldActiveBlock:;
- (void)setConfigStrategyBlock:;
- (void)setNotActiveBlock:;
- (id)shouldActiveBlock;
- (id)configStrategyBlock;
- (id)activeBlock;
- (void)setActiveBlock:;
- (id)notActiveBlock;
- (unsigned long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
@end
