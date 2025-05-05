@interface IESECLynxCardBridgeMethod : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @? handler;
- (void)setName:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (id)name;
+ (id)bridgeMethodWithName:handler:;
@end
