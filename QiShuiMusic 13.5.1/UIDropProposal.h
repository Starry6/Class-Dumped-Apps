@interface UIDropProposal : NSObject
@property (nonatomic) Q operation;
@property (nonatomic) q preferredBadgeStyle;
@property (nonatomic) BOOL precise;
@property (nonatomic) BOOL prefersFullSizePreview;
- (unsigned long long)operation;
- (id)init;
- (void)setOperation:;
- (id)copyWithZone:;
- (id)initWithDropOperation:;
- (BOOL)isPrecise;
- (void)setPrecise:;
- (BOOL)prefersFullSizePreview;
- (void)setPrefersFullSizePreview:;
- (long long)_preferredBadgeStyle;
- (void)_setPreferredBadgeStyle:;
+ (id)new;
@end
