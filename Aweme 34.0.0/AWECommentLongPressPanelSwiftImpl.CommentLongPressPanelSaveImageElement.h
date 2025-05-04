@interface AWECommentLongPressPanelSwiftImpl.CommentLongPressPanelSaveImageElement : NSObject
@property (nonatomic) BOOL horizonMode;
@property (nonatomic) BOOL showRedPoint;
@property (nonatomic) AWECommentLongPressPanelContext commentPageContext;
- (id)commentPageContext;
- (BOOL)elementShouldShow;
- (void)elementTapped;
- (void)setCommentPageContext:;
- (BOOL)horizonMode;
- (void)setHorizonMode:;
- (BOOL)showRedPoint;
- (void)setShowRedPoint:;
- (id)elementImage;
- (id)elementContent;
- (unsigned long long)elementContentStyle;
- (unsigned long long)elementInteractionStyle;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)elementType;
@end
