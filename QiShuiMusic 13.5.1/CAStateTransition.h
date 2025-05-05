@interface CAStateTransition : NSObject
@property (nonatomic) NSString fromState;
@property (nonatomic) NSString toState;
@property (nonatomic) NSArray elements;
- (void)setToState:;
- (id)fromState;
- (id)init;
- (void)dealloc;
- (id)elements;
- (void)setElements:;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void)encodeWithCAMLWriter:;
- (void)setFromState:;
- (id)CAMLTypeForKey:;
- (double)duration;
- (id)toState;
- (void)CAMLParser:setValue:forKey:;
- (id)copyWithZone:;
+ (void)CAMLParserStartElement:;
+ (BOOL)supportsSecureCoding;
@end
