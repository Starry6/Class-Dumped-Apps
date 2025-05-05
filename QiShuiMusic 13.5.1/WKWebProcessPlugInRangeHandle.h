@interface WKWebProcessPlugInRangeHandle : NSObject
@property (nonatomic) ^v _rangeHandle;
@property (nonatomic) WKWebProcessPlugInFrame frame;
@property (nonatomic) NSString text;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_apiObject;
- (id)frame;
- (id)text;
- (id)detectDataWithTypes:context:;
- (id)_rangeHandle;
+ (id)rangeHandleWithJSValue:inContext:;
@end
