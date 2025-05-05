@interface IESECMarketingManagerRitBuilder : NSObject
@property (nonatomic) UIView container;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDictionary commonLog;
@property (nonatomic) NSDictionary layoutInfo;
- (void)setCommonLog:;
- (void)setExtra:;
- (void)setContainer:;
- (id)extra;
- (id)container;
- (void)setLayoutInfo:;
- (id)layoutInfo;
- (void).cxx_destruct;
- (id)commonLog;
@end
