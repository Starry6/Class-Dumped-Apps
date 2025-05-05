@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke
@property (nonatomic) NSDictionary supportByStrokeIdentifier;
- (id)description;
- (void)setSupportByStrokeIdentifier:;
- (void)_setSupportForStrokeIdentifier:support:;
- (BOOL)_removeSupportForStrokeIdentifier:;
- (BOOL)adjustSupportByRemovingStrokeIdentifier:;
- (BOOL)adjustSupportByAddingStroke:consistingOfSubstrokes:;
- (BOOL)_adjustSupportForLineClassificationByAddingStroke:consistingOfSubstrokes:;
- (BOOL)_adjustSupportForContainerClassificationByAddingStroke:consistingOfSubstrokes:;
@end
