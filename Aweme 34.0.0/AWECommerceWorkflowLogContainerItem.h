@interface AWECommerceWorkflowLogContainerItem : AWECommerceWorkflowLogItem
@property (nonatomic) NSMutableDictionary customParamDict;
@property (nonatomic) NSMutableDictionary componentDict;
- (void)setCustomParams:;
- (id)componentDict;
- (void)setComponentDict:;
- (id)customParamDict;
- (void)setCustomParamDict:;
- (id)uploadLogDict;
- (void)appendComponentTraceWithComponentKey:traceKey:;
- (void)appendCustomParams:;
- (void)encodeWithCoder:;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
