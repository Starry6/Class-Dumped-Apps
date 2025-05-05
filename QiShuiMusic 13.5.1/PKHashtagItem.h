@interface PKHashtagItem : PKDetectionItem
@property (nonatomic) NSString hashtagResult;
@property (nonatomic) NSUUID hashtagUUID;
@property (nonatomic) BOOL active;
- (BOOL)active;
- (id)strokeColor;
- (id)description;
- (id)setActive:;
- (BOOL)isEqual:;
- (id)hashtagResult;
- (id)_baselinePath;
- (id)_actionNameForActivation:;
- (id)hashtagUUID;
- (void)clearActiveInDrawing:;
- (void)invalidateUUID;
+ (id)hashtagItemWithQueryItem:sessionManager:;
@end
