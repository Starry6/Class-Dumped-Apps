@interface MontrealLogIndent : NSObject
@property (nonatomic) NSString step;
@property (nonatomic) Q factor;
@property (nonatomic) NSString level;
- (id)step;
- (id)level;
- (id)indentByFactor:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)factor;
- (id)initWithLevel:step:factor:;
+ (id)indentWithLevel:;
+ (id)indentWithLevel:step:factor:;
@end
