@interface BUCacheAction : NSObject
@property (nonatomic) Q actionType;
@property (nonatomic) {_NSRange=QQ} range;
- (id)initWithActionType:range:;
- (unsigned long long)actionType;
- (void)setActionType:;
- (void)setRange:;
- (unsigned long long)hash;
- (id)range;
- (id)description;
- (BOOL)isEqual:;
@end
