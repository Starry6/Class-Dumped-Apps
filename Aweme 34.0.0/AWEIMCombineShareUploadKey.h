@interface AWEIMCombineShareUploadKey : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) q count;
- (id)getContentDict;
- (void)setKey:;
- (void)setCount:;
- (id)key;
- (long long)count;
- (void).cxx_destruct;
- (id)initWithDict:;
@end
