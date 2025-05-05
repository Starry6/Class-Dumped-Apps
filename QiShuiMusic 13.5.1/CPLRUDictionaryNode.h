@interface CPLRUDictionaryNode : NSObject
@property (nonatomic) @ key;
@property (nonatomic) @ object;
- (void)setObject:;
- (void)dealloc;
- (id)key;
- (id)initWithKey:object:;
- (id)object;
@end
