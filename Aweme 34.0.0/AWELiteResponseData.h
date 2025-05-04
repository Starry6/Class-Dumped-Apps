@interface AWELiteResponseData : AWELiteBaseApiModel
@property (nonatomic) NSNumber toastStyle;
@property (nonatomic) NSString toastInfo;
@property (nonatomic) NSString logEvent;
@property (nonatomic) NSDictionary logExtra;
- (void)setLogExtra:;
- (id)logExtra;
- (id)toastInfo;
- (void)setToastInfo:;
- (void)setToastStyle:;
- (id)toastStyle;
- (void).cxx_destruct;
- (id)logEvent;
- (void)setLogEvent:;
+ (id)JSONKeyPathsByPropertyKey;
@end
