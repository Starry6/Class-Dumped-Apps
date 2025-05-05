@interface SHSheetActivityPresentationContext : NSObject
@property (nonatomic) BOOL shouldDismissBeforePresentation;
@property (nonatomic) BOOL shouldPresentOverCurrentContext;
@property (nonatomic) BOOL isCloudSharing;
- (id)description;
- (BOOL)shouldDismissBeforePresentation;
- (void)setShouldDismissBeforePresentation:;
- (BOOL)shouldPresentOverCurrentContext;
- (void)setShouldPresentOverCurrentContext:;
- (BOOL)isCloudSharing;
- (void)setIsCloudSharing:;
@end
