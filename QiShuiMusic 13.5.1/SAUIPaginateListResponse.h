@interface SAUIPaginateListResponse : SABaseClientBoundCommand
@property (nonatomic) q firstItemIndex;
@property (nonatomic) q focusedItemIndex;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (long long)firstItemIndex;
- (void)setFirstItemIndex:;
- (long long)focusedItemIndex;
- (void)setFocusedItemIndex:;
@end
