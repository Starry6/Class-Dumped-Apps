@interface AVMutableMediaSelection : AVMediaSelection
- (BOOL)_isValidMediaSelectionOption:forMediaSelectionGroup:;
- (id)_validatedGroupIdentifierKey:;
- (void)selectMediaOption:inMediaSelectionGroup:;
- (id)copyWithZone:;
@end
