@interface LPCSSVariable : NSObject
@property (nonatomic) NSString name;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (id)variableByResolvingWithThemePath:;
@end
