@interface OBLinkableTemplateLabel : OBTemplateLabel
@property (nonatomic) UITapGestureRecognizer tapRecognizer;
@property (nonatomic) NSURL destinationLink;
- (id)init;
- (void)setLearnMoreURL:;
- (id)tapRecognizer;
- (void)setTapRecognizer:;
- (void).cxx_destruct;
- (void)_linkTapped:;
- (id)destinationLink;
- (void)setDestinationLink:;
@end
