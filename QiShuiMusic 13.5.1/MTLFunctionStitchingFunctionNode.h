@interface MTLFunctionStitchingFunctionNode : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray arguments;
@property (nonatomic) NSArray controlDependencies;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setArguments:;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (id)arguments;
- (id)formattedDescription:;
- (void)setControlDependencies:;
- (unsigned long long)hash;
- (id)controlDependencies;
- (id)description;
- (id)name;
- (id)initWithName:arguments:controlDependencies:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
