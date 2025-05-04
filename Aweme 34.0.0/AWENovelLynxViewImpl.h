@interface AWENovelLynxViewImpl : BDNovelBaseLynxView
@property (nonatomic) AWENovelLynxContainerView lynxView;
@property (nonatomic) <BDNovelLynxViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxView;
- (id)initWithFrame:routeParams:sourceURlString:delegate:;
- (void)setLynxView:;
- (void)novelLynxContainerViewFirstScreen;
- (void)novelLynxContainerViewUpdate;
- (void)novelLynxContainerViewDidStartLoading;
- (BOOL)novelLynxContainerViewShowLoading:;
- (void)novelLynxContainerViewHideLoading;
- (id)novelLynxContainerViewCustomFetchParams:url:;
- (void)bdn_viewAppear;
- (void)bdn_viewDisAppear;
- (void)bdn_addBridge:isNovel:handler:;
- (void)bdn_reload;
- (void)bdn_fireEvent:params:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
@end
