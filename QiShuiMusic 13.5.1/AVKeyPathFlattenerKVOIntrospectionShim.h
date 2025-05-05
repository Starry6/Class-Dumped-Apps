@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject
@property (nonatomic) NSObject observedObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)observedObject;
- (void)cancelCallbacks;
- (id)initWithObservedObject:realNotifier:;
@end
