@interface CNSaveResponse : NSObject
@property (nonatomic) BOOL didAffectMeCard;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)applySnapshotsToSaveRequest:;
- (BOOL)didAffectMeCard;
+ (BOOL)supportsSecureCoding;
@end
