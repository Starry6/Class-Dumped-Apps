@interface KVSpanMatchResult : NSObject
- (id)init;
- (float)score;
- (unsigned long long)hash;
- (void)setScore:;
- (void).cxx_destruct;
- (id)itemInfo;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)fieldMatches;
- (id)spanInfo;
- (id)spanValue;
- (id)initWithItemInfo:spanInfo:fieldMatches:;
- (id)initWithItemInfo:spanInfo:fieldMatches:score:;
- (BOOL)isEqualToSpanMatchResult:;
@end
