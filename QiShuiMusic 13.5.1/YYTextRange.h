@interface YYTextRange : UITextRange
@property (nonatomic) YYTextPosition start;
@property (nonatomic) YYTextPosition end;
@property (nonatomic) BOOL empty;
- (id)end;
- (id)init;
- (BOOL)isEmpty;
- (id)start;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)asRange;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)rangeWithStart:end:;
+ (id)rangeWithRange:;
+ (id)defaultRange;
+ (id)rangeWithRange:affinity:;
@end
