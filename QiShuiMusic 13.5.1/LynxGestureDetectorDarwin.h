@interface LynxGestureDetectorDarwin : NSObject
@property (nonatomic) I gestureID;
@property (nonatomic) Q gestureType;
@property (nonatomic) NSArray gestureCallbackNames;
@property (nonatomic) NSDictionary relationMap;
@property (nonatomic) NSMutableDictionary configMap;
- (id)initWithGestureID:gestureType:gestureCallbackNames:relationMap:;
- (id)configMap;
- (id)gestureCallbackNames;
- (id)initWithGestureID:gestureType:gestureCallbackNames:relationMap:configMap:;
- (id)relationMap;
- (void).cxx_destruct;
- (unsigned long long)gestureType;
- (unsigned int)gestureID;
@end
