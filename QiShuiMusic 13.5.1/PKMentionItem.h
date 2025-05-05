@interface PKMentionItem : PKDetectionItem
@property (nonatomic) NSString mentionResult;
@property (nonatomic) NSUUID mentionUUID;
@property (nonatomic) BOOL active;
- (BOOL)active;
- (id)strokeColor;
- (id)description;
- (id)setActive:;
- (BOOL)isEqual:;
- (id)mentionResult;
- (id)_baselinePath;
- (id)_actionNameForActivation:;
- (void)clearActiveInDrawing:;
- (void)invalidateUUID;
- (id)mentionUUID;
+ (id)mentionItemWithQueryItem:sessionManager:;
@end
