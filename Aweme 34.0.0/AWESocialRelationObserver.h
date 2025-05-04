@interface AWESocialRelationObserver : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) AWESocialRelationRequest request;
- (void)setHandler:;
- (id)initWithRequest:handler:;
- (id)handler;
- (void)notify:;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)request;
@end
