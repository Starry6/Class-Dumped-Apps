@interface SFRichLinkCell : UICollectionViewCell
@property (nonatomic) UIView contextMenuPreviewView;
@property (nonatomic) LPLinkMetadata metadata;
@property (nonatomic) SLHighlight highlight;
@property (nonatomic) SLAttributionView attributionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_updateVibrancy;
- (void)touchesBegan:withEvent:;
- (id)preferredLayoutAttributesFittingAttributes:;
- (id)metadata;
- (id)initWithCoder:;
- (void)setMetadata:;
- (id)contextMenuPreviewView;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)highlight;
- (void)setHighlight:;
- (BOOL)shouldShowContextMenuFromPoint:;
- (id)attributionView;
- (void)setAttributionView:;
- (void)_updateAttributionViewBackground;
+ (id)reuseIdentifier;
@end
