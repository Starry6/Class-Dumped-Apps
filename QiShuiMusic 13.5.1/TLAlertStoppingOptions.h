@interface TLAlertStoppingOptions : NSObject
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) BOOL shouldWaitUntilEndOfCurrentRepetition;
- (id)init;
- (unsigned long long)hash;
- (double)fadeOutDuration;
- (void)setFadeOutDuration:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)shouldWaitUntilEndOfCurrentRepetition;
- (void)setShouldWaitUntilEndOfCurrentRepetition:;
@end
