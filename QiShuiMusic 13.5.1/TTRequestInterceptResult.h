@interface TTRequestInterceptResult : NSObject
@property (nonatomic) NSString modifiedUrl;
@property (nonatomic) NSMutableDictionary addHeaders;
@property (nonatomic) NSMutableDictionary removeHeaders;
- (void)setModifiedUrl:;
- (id)addHeaders;
- (id)modifiedUrl;
- (id)removeHeaders;
- (void)setAddHeaders:;
- (void)setRemoveHeaders:;
- (id)init;
- (void).cxx_destruct;
@end
