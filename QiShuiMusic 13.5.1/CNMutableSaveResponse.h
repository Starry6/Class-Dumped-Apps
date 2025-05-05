@interface CNMutableSaveResponse : CNSaveResponse
@property (nonatomic) BOOL didAffectMeCard;
- (void)setContactSnapshot:forIndexPath:;
- (void)setGroupSnapshot:forIndexPath:;
- (void)setContainerSnapshot:forIndexPath:;
- (void)setDidAffectMeCard:;
+ (BOOL)supportsSecureCoding;
@end
