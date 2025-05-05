@interface OPTTSMutableTTSReplacement : OPTTSTTSReplacement
@property (nonatomic) NSString original;
@property (nonatomic) NSString replacement;
- (id)init;
- (id)original;
- (id)copyWithZone:;
- (id)replacement;
- (void)setOriginal:;
- (void)setReplacement:;
@end
