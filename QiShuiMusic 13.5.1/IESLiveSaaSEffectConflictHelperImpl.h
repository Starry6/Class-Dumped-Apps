@interface IESLiveSaaSEffectConflictHelperImpl : NSObject
@property (nonatomic) BOOL filterEffective;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)filterEffective;
- (void)effectConflictEndWithFaceSticker:;
- (void)effectConflictStartWithFaceSticker:;
- (void)effectConflictStartWithFilter;
- (void)effectConflictStartWithRepelValue:sender:;
- (void)effectConflitEndWithRepelValue:sender:;
- (BOOL)filterOverSticker;
- (void)resetFilterIfNeededSender:;
- (void)setFilterEffective:;
@end
