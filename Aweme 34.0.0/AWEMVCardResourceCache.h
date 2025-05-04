@interface AWEMVCardResourceCache : NSObject
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) NSMutableDictionary cacheDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCacheDict:;
- (id)dequeueReusableIconLabelResourceWithModel:;
- (id)dequeueReusableRightBottomLabelResourceWithModel:;
- (id)dequeueReusableRightTopViewResourceWithModel:;
- (void)setupCache;
- (id)dequeueReusableResourceViewWithClass:Model:;
- (id)dequeueReusableCloseButtonResourceWithModel:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)cacheDict;
@end
