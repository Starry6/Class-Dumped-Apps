@interface IESLiveTryApplyLinkParamModel : IESLiveBridgeModel
@property (nonatomic) NSString source;
@property (nonatomic) BOOL isTask;
@property (nonatomic) NSString activityName;
@property (nonatomic) NSNumber applyType;
@property (nonatomic) NSString applySource;
+ (id)modelCustomPropertyMapper;
@end
