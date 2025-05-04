@interface AWEDetailVideoCutTemplateEnterAwemeDetailServiceImpl : AWEDetailEnterAwemeDetailServiceImpl
@property (nonatomic) AWEDetailVideoCutTemplateViewModel stateContext;
@property (nonatomic) <AWEDetailVideoCutTemplateEnterAwemeDetailServiceDelegate> delegate;
- (void)enterAwemeDetailWithIndexPath:awemeModel:;
- (id)initWithHost:stateContext:;
- (void)setHost:;
- (id)host;
- (void)setStateContext:;
- (id)delegate;
- (void).cxx_destruct;
- (id)stateContext;
- (void)setDelegate:;
@end
