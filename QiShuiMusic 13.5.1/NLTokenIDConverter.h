@interface NLTokenIDConverter : NSObject
- (unsigned int)tokenIDForString:;
- (id)stringForTokenID:;
- (id)stringForTokenIDs:length:;
- (void)enumerateTokenIDsForString:range:withBlock:;
@end
