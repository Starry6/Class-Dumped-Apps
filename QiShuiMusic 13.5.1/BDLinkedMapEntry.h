@interface BDLinkedMapEntry : NSObject
@property (nonatomic) @ key;
@property (nonatomic) @ obj;
@property (nonatomic) Q cost;
@property (nonatomic) BOOL isHot;
@property (nonatomic) BDLinkedMapEntry prev;
@property (nonatomic) BDLinkedMapEntry next;
- (BOOL)isHot;
- (void)setIsHot:;
- (id)next;
- (void)setNext:;
- (id)prev;
- (id)obj;
- (id)key;
- (unsigned long long)cost;
- (void)setPrev:;
- (void)setKey:;
- (void).cxx_destruct;
- (void)setObj:;
- (void)setCost:;
@end
