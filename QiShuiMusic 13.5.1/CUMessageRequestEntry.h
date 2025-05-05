@interface CUMessageRequestEntry : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) NSDictionary options;
- (void)setOptions:;
- (void)setHandler:;
- (id)handler;
- (id)options;
- (void).cxx_destruct;
@end
