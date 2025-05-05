@interface BWDeepFusionInputBuffer : NSObject
@property (nonatomic) ^{__CVBuffer=} buffer;
@property (nonatomic) Q type;
@property (nonatomic) NSDictionary metadata;
- (void)dealloc;
- (id)buffer;
- (id)metadata;
- (unsigned long long)type;
- (id)initWithBuffer:type:metadata:;
@end
