@interface BDARifleLynxMethod : NSObject
@property (nonatomic) NSString methodName;
@property (nonatomic) @? handler;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (id)methodName;
- (void)setMethodName:;
+ (id)methodWithName:handler:;
@end
