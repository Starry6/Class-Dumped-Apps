@interface LynxLruCacheNode : NSObject
@property (nonatomic) @ value;
@property (nonatomic) <NSCopying> key;
@property (nonatomic) LynxLruCacheNode next;
@property (nonatomic) LynxLruCacheNode prev;
- (id)initWithValue:key:;
- (id)next;
- (void)setNext:;
- (id)prev;
- (id)key;
- (id)initWithCoder:;
- (void)setPrev:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
+ (id)nodeWithValue:key:;
@end
