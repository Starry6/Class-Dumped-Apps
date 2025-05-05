@interface AVStringPair : NSObject
@property (nonatomic) NSString first;
@property (nonatomic) NSString second;
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
- (id)key;
- (id)second;
- (id)first;
- (void).cxx_destruct;
- (id)value;
- (id)initWithString:separatedByString:;
- (BOOL)keyEquals:;
@end
