@interface LynxUpdateMeta : NSObject
@property (nonatomic) LynxTemplateData data;
@property (nonatomic) LynxTemplateData globalProps;
- (void)setGlobalProps:;
- (id)globalProps;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
@end
