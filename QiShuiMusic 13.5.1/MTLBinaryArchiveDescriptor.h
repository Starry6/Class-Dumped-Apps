@interface MTLBinaryArchiveDescriptor : NSObject
@property (nonatomic) Q options;
@property (nonatomic) Q writingOptions;
@property (nonatomic) NSURL url;
- (void)setOptions:;
- (id)url;
- (id)init;
- (void)dealloc;
- (unsigned long long)writingOptions;
- (unsigned long long)hash;
- (void)setUrl:;
- (unsigned long long)options;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setWritingOptions:;
@end
