@interface CNContactDiff : NSObject
@property (nonatomic) NSArray updates;
- (void).cxx_destruct;
- (id)description;
- (id)updates;
- (id)contactByApplyingUpdatesToContact:;
- (id)initWithUpdates:;
- (BOOL)applyToABPerson:isUnified:logger:error:;
- (void)applyToMutableContact:withIdentifierMap:;
- (void)applyToMutableContacts:withIdentifierMap:;
+ (id)diffContact:to:error:;
@end
