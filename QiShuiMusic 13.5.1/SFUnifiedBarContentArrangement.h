@interface SFUnifiedBarContentArrangement : NSObject
@property (nonatomic) NSArray allContentViews;
@property (nonatomic) UIView<SFUnifiedBarContentView> inlineContentView;
@property (nonatomic) NSArray standaloneContentViews;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithInlineContentView:standaloneContentViews:;
- (id)allContentViews;
- (id)inlineContentView;
- (id)standaloneContentViews;
@end
