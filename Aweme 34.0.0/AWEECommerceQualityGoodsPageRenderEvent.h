@interface AWEECommerceQualityGoodsPageRenderEvent : NSObject
@property (nonatomic) NSString pageID;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDate startRenderDate;
@property (nonatomic) NSDate endRenderDate;
@property (nonatomic) NSDate endInteractDate;
- (void)setExtra:;
- (id)endRenderDate;
- (void)setEndRenderDate:;
- (id)endInteractDate;
- (void)setEndInteractDate:;
- (id)extra;
- (void).cxx_destruct;
- (void)setPageID:;
- (id)pageID;
- (id)startRenderDate;
- (void)setStartRenderDate:;
@end
