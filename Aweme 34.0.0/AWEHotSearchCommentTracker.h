@interface AWEHotSearchCommentTracker : NSObject
+ (id)commonParamsWithContext:;
+ (void)trackEvent:cellModel:logExtra:;
+ (id)commonParamsWithSectionContext:;
+ (void)trackEvent:context:logExtra:;
+ (id)getTabName:;
+ (void)transmissionCommentEventWithLogExtra:attachToObject:;
+ (id)getTabNameWithOuterType:feedType:;
+ (id)commonParamsWithCellModel:;
+ (id)clickAreaWithClickType:;
+ (id)clickTypeMap;
@end
