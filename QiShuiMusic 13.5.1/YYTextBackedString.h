@interface YYTextBackedString : NSObject
@property (nonatomic) NSString string;
- (id)string;
- (void)setString:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)stringWithString:;
@end
