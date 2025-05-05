@interface IESLiveRelatedLiveTabsEntryView : UIView
@property (nonatomic) IESLiveRelatedLiveBaseBtn relatedLiveBtn;
@property (nonatomic) NSString bgColor;
@property (nonatomic) IESLiveRelatedLiveEntryItem item;
@property (nonatomic) @? portraitEnterViewDidClick;
- (void)enterViewDidClick;
- (id)entryViewSize;
- (id)initWithEntryItem:;
- (id)portraitEnterViewDidClick;
- (id)relatedLiveBtn;
- (void)setPortraitEnterViewDidClick:;
- (void)setRelatedLiveBtn:;
- (void)updatePaidTag:;
- (void)updateWithEntryItem:;
- (id)item;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)bgColor;
- (void)setBgColor:;
- (void)updateTitle:;
@end
