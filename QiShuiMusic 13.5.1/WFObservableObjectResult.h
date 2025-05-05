@interface WFObservableObjectResult : WFObservableResult
@property (nonatomic) WFDatabaseObjectDescriptor descriptor;
@property (nonatomic) WFDatabaseObjectDescriptor value;
- (id)descriptor;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (void)handleChangeNotification:;
- (id)initWithValueType:glyphSize:initialValue:descriptor:;
+ (void)getResultWithDescriptor:valueType:glyphSize:completionHandler:;
+ (id)getResultWithDescriptor:valueType:glyphSize:error:;
@end
