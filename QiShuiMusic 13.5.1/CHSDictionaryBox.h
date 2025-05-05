@interface CHSDictionaryBox : NSObject
@property (nonatomic) NSDictionary value;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:;
+ (BOOL)supportsSecureCoding;
+ (id)boxedValue:;
@end
