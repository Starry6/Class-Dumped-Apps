@interface TTResponseInterceptResult : NSObject
@property (nonatomic) NSMutableDictionary addHeaders;
@property (nonatomic) NSMutableDictionary removeHeaders;
- (id)addHeaders;
- (id)removeHeaders;
- (void)setAddHeaders:;
- (void)setRemoveHeaders:;
- (id)init;
- (void).cxx_destruct;
@end
