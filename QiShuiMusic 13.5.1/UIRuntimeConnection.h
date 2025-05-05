@interface UIRuntimeConnection : NSObject
@property (nonatomic) @ source;
@property (nonatomic) @ destination;
@property (nonatomic) NSString label;
- (void)setDestination:;
- (id)destination;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)source;
- (void)connect;
- (void)setSource:;
- (void)connectForSimulator;
@end
