@interface ISDecoratedIcon : ISConcreteIcon
@property (nonatomic) ISIcon icon;
@property (nonatomic) NSArray decorations;
- (id)icon;
- (id)initWithCoder:;
- (id)symbol;
- (void)encodeWithCoder:;
- (id)makeResourceProvider;
- (void).cxx_destruct;
- (id)decorations;
- (id)description;
- (id)iconWithDecorations:;
- (id)initWithIcon:decorations:;
+ (BOOL)supportsSecureCoding;
@end
