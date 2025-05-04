@interface AWECommentPermissionInfo : MTLModel
@property (nonatomic) q commentPermissionStatus;
@property (nonatomic) BOOL canComment;
@property (nonatomic) BOOL itemDetailEntry;
@property (nonatomic) BOOL pressEntry;
@property (nonatomic) BOOL toastGuide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)commentPermissionStatus;
- (BOOL)pressEntry;
- (BOOL)toastGuide;
- (void)setCommentPermissionStatus:;
- (BOOL)canComment;
- (void)setCanComment:;
- (BOOL)itemDetailEntry;
- (void)setItemDetailEntry:;
- (void)setPressEntry:;
- (void)setToastGuide:;
+ (id)commentPermissionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
