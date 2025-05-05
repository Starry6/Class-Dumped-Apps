@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate
@property (nonatomic) BOOL useDefaultModalPresentationStyle;
@property (nonatomic) BOOL useDefaultModalTransitionStyle;
@property (nonatomic) q modalPresentationStyle;
@property (nonatomic) q modalTransitionStyle;
- (long long)modalTransitionStyle;
- (long long)modalPresentationStyle;
- (void)setModalTransitionStyle:;
- (id)initWithCoder:;
- (void)setModalPresentationStyle:;
- (void)encodeWithCoder:;
- (id)newDefaultPrepareHandlerForSegue:;
- (id)newDefaultPerformHandlerForSegue:;
- (BOOL)useDefaultModalPresentationStyle;
- (void)setUseDefaultModalPresentationStyle:;
- (BOOL)useDefaultModalTransitionStyle;
- (void)setUseDefaultModalTransitionStyle:;
@end
