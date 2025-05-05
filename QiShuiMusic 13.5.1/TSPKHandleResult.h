@interface TSPKHandleResult : NSObject
@property (nonatomic) q action;
@property (nonatomic) NSString returnValue;
@property (nonatomic) TSPKEventData eventData;
- (id)getObjectWithReturnType:defaultValue:;
- (id)returnValue;
- (id)init;
- (long long)action;
- (void)setAction:;
- (void).cxx_destruct;
- (id)eventData;
- (void)setReturnValue:;
- (void)setEventData:;
@end
