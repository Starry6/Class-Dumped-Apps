@interface AWEPizzaSwiftBridging.PizzaComponentBridge : NSObject
@property (nonatomic) q state;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSSet cTags;
@property (nonatomic) @ attachment;
@property (nonatomic) NSString componentType;
@property (nonatomic) NSSet sTags;
@property (nonatomic) <AWEPzComponentModelProtocol> model;
@property (nonatomic) BOOL consumed;
- (id)cTags;
- (id)sTags;
- (void)remove;
- (void)show;
- (void)hide;
- (id)init;
- (BOOL)consumed;
- (void)add;
- (id)componentType;
- (long long)state;
- (id)model;
- (void)consume;
- (void).cxx_destruct;
- (id)attachment;
- (id)componentID;
@end
