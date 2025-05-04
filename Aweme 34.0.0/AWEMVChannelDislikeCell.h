@interface AWEMVChannelDislikeCell : AWEDoubleColumnDislikeCell
@property (nonatomic) BOOL isWatchLaterCell;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPopoverIfNeeded;
- (void)configWithTitle:;
- (void)setIsWatchLaterCell:;
- (BOOL)isWatchLaterCell;
- (void)prepareForReuse;
- (void)willDisplay;
+ (id)reuseIdentifier;
@end
