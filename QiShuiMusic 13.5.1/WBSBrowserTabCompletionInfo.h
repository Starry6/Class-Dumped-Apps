@interface WBSBrowserTabCompletionInfo : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSUUID windowUUID;
@property (nonatomic) NSUUID tabGroupUUID;
@property (nonatomic) NSString tabGroupTitle;
@property (nonatomic) Q tabIndex;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString title;
- (id)url;
- (unsigned long long)tabIndex;
- (id)uuid;
- (id)tabGroupUUID;
- (id)title;
- (void).cxx_destruct;
- (id)windowUUID;
- (id)tabGroupTitle;
- (id)initWithUUID:windowUUID:tabIndex:url:title:;
- (id)initWithUUID:windowUUID:tabGroupUUID:tabGroupTitle:tabIndex:url:title:;
@end
