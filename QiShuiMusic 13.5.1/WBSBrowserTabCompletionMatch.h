@interface WBSBrowserTabCompletionMatch : WBSTabCompletionMatch
@property (nonatomic) NSUUID tabUUID;
@property (nonatomic) NSUUID tabGroupUUID;
@property (nonatomic) NSString tabGroupTitle;
@property (nonatomic) NSUUID windowUUID;
@property (nonatomic) Q tabIndex;
- (unsigned long long)tabIndex;
- (id)tabGroupUUID;
- (void).cxx_destruct;
- (id)windowUUID;
- (id)parsecDomainIdentifier;
- (id)tabUUID;
- (id)initWithTabUUID:windowUUID:tabIndex:userTypedString:tabURL:tabTitle:forQueryID:;
- (id)initWithTabUUID:windowUUID:tabGroupUUID:tabGroupTitle:tabIndex:userTypedString:tabURL:tabTitle:forQueryID:;
- (id)tabGroupTitle;
@end
