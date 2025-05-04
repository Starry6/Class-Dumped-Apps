@interface AWELuckyCatTaskDoneResponseDataModel : AWEBaseApiModel
@property (nonatomic) Q dataType;
@property (nonatomic) AWELuckyCatTaskDoneResponsePopupInfo popUpInfo;
@property (nonatomic) AWELuckyCatTaskDoneResponseToastInfo toastInfo;
@property (nonatomic) AWELuckyCatTaskDoneResponseTaskInfo taskInfo;
- (id)toastInfo;
- (void)setToastInfo:;
- (id)popUpInfo;
- (void)setPopUpInfo:;
- (void)setDataType:;
- (void).cxx_destruct;
- (id)taskInfo;
- (unsigned long long)dataType;
- (void)setTaskInfo:;
+ (id)toastInfoJSONTransformer;
+ (id)popUpInfoJSONTransformer;
+ (id)taskInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
