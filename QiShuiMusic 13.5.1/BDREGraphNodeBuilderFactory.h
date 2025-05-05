@interface BDREGraphNodeBuilderFactory : NSObject
@property (nonatomic) NSDictionary operatorBuilderMap;
@property (nonatomic) NSDictionary functionBuilderMap;
- (id)functionBuilderMap;
- (id)operatorBuilderMap;
- (id)init;
- (void).cxx_destruct;
+ (id)builderWithFuncName:;
+ (id)builderWithOpName:;
+ (id)sharedFactory;
@end
