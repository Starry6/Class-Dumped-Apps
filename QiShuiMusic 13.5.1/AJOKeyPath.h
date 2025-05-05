@interface AJOKeyPath : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSArray components;
- (id)components;
- (id)key;
- (void).cxx_destruct;
- (id)initWithKeyPath:;
- (id)description;
@end
