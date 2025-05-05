@interface BUADServiceCenter : NSObject
@property (nonatomic) BUADServiceBuilder builder;
- (id)getObject:name:;
- (id)getObject:nameWithArgs:;
- (id)getObjectWithArgs:;
- (void)loadDefaultModules;
- (id)builder;
- (void).cxx_destruct;
- (void)setupData;
- (void)setBuilder:;
- (id)getObject:;
+ (id)defaultCenter;
@end
