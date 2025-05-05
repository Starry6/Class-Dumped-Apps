@interface CNUnifiedComposeRecipient : CNComposeRecipient
- (id)children;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithChildren:defaultChild:;
- (id)sortedChildren;
- (BOOL)showsChevronButton;
@end
