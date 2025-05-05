@interface IESLiveBattlePanelActionParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber eventName;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)extra;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
