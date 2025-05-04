@interface AWERLAttribute : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSNumber state;
@property (nonatomic) NSObject defaultValue;
@property (nonatomic) @? setValueBlock;
@property (nonatomic) @? unsetValueBlock;
- (id)initWithName:state:defaultValue:setValueBlock:unsetValueBlock:;
- (id)setValueBlock;
- (void)setSetValueBlock:;
- (id)unsetValueBlock;
- (void)setUnsetValueBlock:;
- (id)defaultValue;
- (void)setDefaultValue:;
- (unsigned long long)hash;
- (id)state;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setName:;
- (id)name;
- (void)setState:;
@end
