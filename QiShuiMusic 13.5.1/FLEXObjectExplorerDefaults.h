@interface FLEXObjectExplorerDefaults : NSObject
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL wantsDynamicPreviews;
- (BOOL)isEditable;
- (BOOL)wantsDynamicPreviews;
+ (id)canEdit:wantsPreviews:;
@end
