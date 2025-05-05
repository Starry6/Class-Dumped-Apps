@interface AVMediaSelectionNilOption : AVMediaSelectionOption
- (id)dictionary;
- (void)dealloc;
- (BOOL)isPlayable;
- (id)group;
- (id)description;
- (id)_groupID;
- (BOOL)isEqual:;
- (id)_groupMediaType;
- (id)initWithGroup:;
- (BOOL)_representsNilSelection;
@end
