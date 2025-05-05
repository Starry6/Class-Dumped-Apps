@interface WFObservableArrayResult : WFObservableResult
@property (nonatomic) WFCoreDataResultState resultState;
@property (nonatomic) WFResultQuery query;
@property (nonatomic) NSArray values;
- (id)values;
- (id)query;
- (void).cxx_destruct;
- (id)description;
- (id)initWithValueType:glyphSize:initialValues:query:resultState:;
- (void)handleChangeNotification:;
- (id)resultState;
+ (void)getResultWithQuery:valueType:glyphSize:completionHandler:;
+ (void)getResultWithQuery:valueType:glyphSize:roundedIcon:completionHandler:;
+ (id)getResultWithQuery:valueType:glyphSize:error:;
+ (id)getEmptyResultWithQuery:valueType:glyphSize:;
@end
