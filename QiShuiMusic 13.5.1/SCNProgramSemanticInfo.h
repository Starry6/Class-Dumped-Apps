@interface SCNProgramSemanticInfo : NSObject
@property (nonatomic) NSString semantic;
@property (nonatomic) NSDictionary options;
- (void)setOptions:;
- (void)dealloc;
- (id)semantic;
- (id)initWithCoder:;
- (void)setSemantic:;
- (void)encodeWithCoder:;
- (id)options;
+ (BOOL)supportsSecureCoding;
+ (id)infoWithSemantic:options:;
@end
