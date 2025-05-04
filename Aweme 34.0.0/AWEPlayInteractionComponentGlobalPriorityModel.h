@interface AWEPlayInteractionComponentGlobalPriorityModel : NSObject
@property (nonatomic) NSString componentType;
@property (nonatomic) NSString componentID;
@property (nonatomic) Q state;
@property (nonatomic) NSPointerArray components;
@property (nonatomic) <AWEPzComponentProtocol> pzComponent;
- (void)setPzComponent:;
- (id)pzComponent;
- (id)componentType;
- (unsigned long long)state;
- (void)setComponents:;
- (void)setComponentType:;
- (void).cxx_destruct;
- (id)components;
- (void)setState:;
- (void)setComponentID:;
- (id)componentID;
@end
