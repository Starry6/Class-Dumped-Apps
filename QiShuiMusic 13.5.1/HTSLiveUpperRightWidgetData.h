@interface HTSLiveUpperRightWidgetData : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger widgetType;
@property (nonatomic) NSString extra;
@property (nonatomic) NSInteger priority;
+ (id)descriptor;
@end
